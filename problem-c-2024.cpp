#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> w(n + 1);
    for (int i = 1; i <= n; i++) cin >> w[i];

    vector<int> a(n+1), b(n+1);
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) cin >> b[i];

    vector<int> pos(n+1);
    for (int = 1; i <= n; i++) pos[b[i]] = i;

    vector<int> p(n+1);
    for (int i = 1; i <= n; i++) p[i] = pos[a[i]];

    vector<bool> vis(n + 1, false);
    long long ans = 0;
    int gmin = *min_element(w.begin() + 1, w.end());

    for (int i = 1; i <= n; i++) {
        if (!vis[i]) {
            int j = i;
            long long sum = 0;
            int cmin = INT_MAX, k = 0;
            sum += w[j];
            cmin = min(cmin, w[j]);
            j = p[j];
            k++;
        }
        if (k > 1) {
            long long cost1 = sum + (long long )(k - 2) * cmin;
            long long cost2 = sum + cmin + (long long)(k + 1) * gmin;
            ans += min(cost1, cost2);
        }
    }
    cout << ans << "\n";
    return 0;
}