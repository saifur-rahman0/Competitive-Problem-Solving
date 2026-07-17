#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<long long> first(n);
        for (int i = 0; i < n; i++) cin >> first[i];

        unordered_map<long long, vector<pair<long long, long long>>> adj;
        adj.reserve(2 * m);

        for (int i = 0; i < m; i++) {
            long long x, y, z;
            cin >> x >> y >> z;
            adj[x].push_back({y, z});
            adj[y].push_back({x, z});
        }

        unordered_set<long long> prsnt;
        prsnt.reserve(n + m);
        queue<long long> q;

        for (auto &c : first) {
            prsnt.insert(c);
            q.push(c);
        }

        while (!q.empty()) {
            long long u = q.front();
            q.pop();

            if (!adj.count(u)) continue;

            for (auto &p : adj[u]) {
                long long v = p.first;
                long long z = p.second;

                if (prsnt.count(v) && !prsnt.count(z)) {
                    prsnt.insert(z);
                    q.push(z);
                }
            }
        }

        cout << prsnt.size() << "\n";
    }
    return 0;
}
