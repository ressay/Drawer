//
// Created by ressay on 16/11/18.
//

#ifndef PROJECT_CLUSTERER_H
#define PROJECT_CLUSTERER_H

#include <cmath>
#include "vector"
#include "map"

using namespace std;

class ClusterPoint
{
public:
    ClusterPoint()
    {}

    ClusterPoint(double *vec, int N) :  N(N)
    {
        this->vec = new double[N];
        for (int i = 0; i < N; ++i)
        {
            this->vec[i] = vec[i];
        }
    }

    ~ClusterPoint()
    {

    }

    double * vec;
    int N;

    double getDistance(ClusterPoint point)
    {
        double s = 0;
        for (int i = 0; i < N; ++i)
        {
            s += pow(vec[i]-point.vec[i],2);
        }
        return sqrt(s);
    }

    void operator=(ClusterPoint point)
    {
        N = point.N;
        vec = new double[point.N];
        for (int i = 0; i < N; ++i)
        {
            vec[i] = point.vec[i];
        }
    }
};

class Subset
{
public:
    int parent;
    int rank;
};

class Cluster
{
public:
    Cluster(const vector<int> &indexes, const ClusterPoint &avg);
    Cluster(){}
    vector<int> indexes;
    ClusterPoint avg;
    double getDistance(Cluster cluster)
    {
        return avg.getDistance(cluster.avg);
    }
};

class Clusterer
{
public:
    Clusterer(vector<ClusterPoint> pnts)
    {
        N = pnts.size();
        subsets = new Subset[pnts.size()];
        points = new ClusterPoint[pnts.size()];
        for (int i = 0; i < pnts.size(); ++i)
        {
            points[i] = pnts[i];
            subsets[i].parent = i;
            subsets[i].rank = 0;
        }



    }
    Subset* subsets;
    ClusterPoint* points;
    int N;
    int find(int i);
    void uni(int i, int j);
    int find(Cluster i);
    void uni(Cluster i, Cluster j);
    vector<Cluster> generateClusters();
    vector<Cluster> findClusters(double distanceThresh);

};


#endif //PROJECT_CLUSTERER_H
