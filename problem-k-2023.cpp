#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    vector<int> L(n), R(n);
    L[0] = 1;
    for (int i = 1; i < n; i++) {
        L[i] = min(L[i-1] + 1, a[i]);
    }
    R[n-1] = 1;
    for (int i = n - 2; i >= 0; i--) {
        R[i] = min(R[i+1] + 1, a[i]);
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        ans = max(ans, min(L[i], R[i]));
    }

    cout << ans << "\n";
    return 0;
}
