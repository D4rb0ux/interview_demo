#include <iostream>
#include <vector>
#include <queue>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> coord(n); // coordinates of each city
    for (int i = 0; i < n; i++) {
        cin >> coord[i].first >> coord[i].second;
    }

    size_t k; // max possible length between cities
    cin >> k;

    vector<vector<int>> adj; // adjacency list for every city
    for (int i = 0; i < n; i++) {
        vector<int> reachable;
        for (int j = 0; j < n; j++) {
            if (i != j &&
            abs(coord[i].first - coord[j].first) + abs(coord[i].second - coord[j].second) <= k)
                reachable.push_back(j);
        }
        adj.push_back(reachable);
    }

    int from, to;
    cin >> from >> to;
    from--;
    to--;

    vector<bool> visited(n, false);
    queue<int> q;
    visited[from] = true;
    q.push(from);

    vector<int> len(n, 0), prev(n);
    prev[from] = -1;

    while(!q.empty()) {
        int v = q.front();
        q.pop();
        for (int i = 0; i < adj[v].size(); i++) {
            int w = adj[v][i];
            if (visited[w] == false) {
                visited[w] = true;
                q.push(w);
                len[w] = len[v] + 1;
                prev[w] = v;
            }
        }
    }

    if (visited[to] == false)
        cout << -1;
    else
        cout << len[to];
    return 0;
}
