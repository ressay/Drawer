//
// Created by ressay on 16/11/18.
//

#include <iostream>
#include "Clusterer.h"

int Clusterer::find(int i)
{
    if (subsets[i].parent != i)
        subsets[i].parent = find(subsets[i].parent);

    return subsets[i].parent;
}

void Clusterer::uni(int i, int j)
{
    int xroot = find(i);
    int yroot = find(j);

    if (subsets[xroot].rank < subsets[yroot].rank)
        subsets[xroot].parent = yroot;
    else if (subsets[xroot].rank > subsets[yroot].rank)
        subsets[yroot].parent = xroot;
    else
    {
        subsets[yroot].parent = xroot;
        subsets[xroot].rank++;
    }
}

int Clusterer::find(Cluster i)
{
    return find(i.indexes[0]);
}

void Clusterer::uni(Cluster i, Cluster j)
{
    uni(i.indexes[0],j.indexes[0]);
}

vector<Cluster> Clusterer::findClusters(double distanceThresh)
{
    vector<Cluster> clusters = generateClusters();
    int size = clusters.size(),iterations = 0;

    while(true)
    {

        for (int i=0; i < clusters.size();i++)
        {
            double minDis = INT32_MAX;
            Cluster cl = clusters[i];
            Cluster minCl = cl;
            int subse = find(cl);
            if(clustersDone[subse])
                continue;
            bool found = false;
            for (int j = i+1; j < size; ++j)
            {
                Cluster candidate = clusters[j];
                double dis = cl.getDistance(candidate);
                iterations++;
                if(dis < minDis)
                {

                    minDis = dis;
                    minCl = candidate;
                    dis = distanceThresh;
                    double s1 = cl.indexes.size(), s2 = minCl.indexes.size();
                    if(s1 > 1 || s2 > 1)
                        dis = (dis/2)*sqrt(s1)+(dis/2)*sqrt(s2);
                    if(minDis <= dis)
                    {
                        uni(cl, minCl);
                        found = true;
                        break;
                    }
                }
            }
            if(!found)
                clustersDone[subse] = true;
        }
        clusters = generateClusters();
//        cout << "size is: " << size << " clusters: " << clusters.size() << endl;
        if(size == clusters.size())
            break;
        size = clusters.size();
    }
//    cout << "did : " << iterations << " iterations! " << endl;
//    cout << "size is: " << size << " clusters: " << clusters.size() << endl;
    return clusters;
}

vector<Cluster> Clusterer::generateClusters()
{
    vector<int> subs[N];
    vector<Cluster> clusters;
    bool done[N] = {};
    for (int i = 0; i < N; ++i)
    {
        subs[find(i)].push_back(i);
    }

    for (int j = 0; j < N; ++j)
    {
        int set = find(j);
        if(!done[set] && !subs[set].empty())
        {
            done[set] = true;
            double* vec = new double[points[0].N];
            for (int i : subs[set])
            {
                for (int k = 0; k < points[0].N; ++k)
                {
                    vec[k] += points[i].vec[k];
                }
            }
            for (int i = 0; i < points[0].N; ++i)
            {
                vec[i] /= subs[set].size();
            }
            ClusterPoint pnt(vec,points[0].N);
            clusters.emplace_back(subs[set],pnt);
        }
    }
    return clusters;
}

Cluster::Cluster(const vector<int> &indexes, const ClusterPoint &avg) : indexes(indexes), avg(avg)
{}
