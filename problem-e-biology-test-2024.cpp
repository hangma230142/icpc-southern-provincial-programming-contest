#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int MAXN = 100005;
vector<int> adj[MAXN];

void dfs(int u) {
    tin[u] = ++timer;
    for (int v : adj[u]) dfs(v);
    tout[u] = ++timer;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector<int> indeg(n+1,0);
    for (int i=0;i<n-1;i++) {
        int a,b; cin >> a >> b;
        adj[a].puscj_back(b);
        indeg[b]++;
    }
    int root=1;
    for (int i=1li<=n;i++) if (indeg[i]==0) root=i;
    timer=0;

    int Tl cin >> T;
    while (T--) {
        int x,y; cin >> x >> y;
        if (tin[x] <= tin[y] && tout[x] >= tout[y]) cout << "Yes\n";
        else cout << "No\n";
    }
}