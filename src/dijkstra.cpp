#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

// Runs Dijkstra's algorithm starting from a source node
void dijkstra(int start, vector<vector<pair<int,int>>> &graph)
{
    int n = graph.size();

    // distance array
    vector<int> dist(n, INT_MAX);

    // priority queue (distance, node)
    priority_queue<
        pair<int,int>,
        vector<pair<int,int>>,
        greater<pair<int,int>>
    > pq;

    dist[start] = 0;
    pq.push(pair<int,int>(0, start));

    while(!pq.empty())
    {
        int currentDist = pq.top().first;
        int node = pq.top().second;
        pq.pop();

        // check all neighbors
        for(int i = 0; i < graph[node].size(); i++)
        {
            int neighbor = graph[node][i].first;
            int weight = graph[node][i].second;

            if(dist[node] + weight < dist[neighbor])
            {
                dist[neighbor] = dist[node] + weight;
                pq.push(pair<int,int>(dist[neighbor], neighbor));
            }
        }
    }

    // print shortest distances
    cout << "Shortest distances from node " << start << endl;

    for(int i = 0; i < n; i++)
    {
        cout << "Node " << i << " : " << dist[i] << endl;
    }
}

int main()
{
    int n = 5;

    // adjacency list
    vector<vector<pair<int,int>>> graph(n);

    // add edges (neighbor, weight)
    graph[0].push_back(pair<int,int>(1,4));
    graph[0].push_back(pair<int,int>(2,1));
    graph[2].push_back(pair<int,int>(1,2));
    graph[1].push_back(pair<int,int>(3,1));
    graph[2].push_back(pair<int,int>(3,5));
    graph[3].push_back(pair<int,int>(4,3));

    dijkstra(0, graph);

    return 0;
}
