#include <bits/stdc++.h>

using namespace std;
void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
void printGraph(vector<int> adj[], int N)
{
    for (int i = 0; i < N; i++)
    {

        cout << "NODE " << i << " -> ";
        for (auto it : adj[i])
        {
            cout << it << " ";
        }
    }
    cout << endl;
}
int main()
{
    int N = 4;
    vector<int> adj[N];
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 2, 3);
    printGraph(adj, N);
}