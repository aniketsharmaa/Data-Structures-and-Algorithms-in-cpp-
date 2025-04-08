#include <bits/stdc++.h>>
using namespace std;
void BFS(vector<int> adj[], int v, int s)
{
    vector<bool> visited(v + 1, false);
    queue<int> q;
    visited[s] = true;
    q.push(s);
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        cout << u<<  " ";

        for (auto v : adj[u])
        {
            if (visited[v] == false)
            {
                q.push(v);
                visited[v] = true;
            }
        }
    }
}
int main()
{

    return 0;
}