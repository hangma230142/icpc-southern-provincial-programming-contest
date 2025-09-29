#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,
    cin >> n;
    vector<int> a(n);
    for (int i = 1; i <= n; i++) cin >> ww[i];
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    vector<int> pos(n+1);
    for (int i = 0; i < n; i++) pos[b[i]] = 1;
    vector<int> p(n);
    for (int i = 0; i < n; i++) p[i] = pos[a[i]];
    vector<bool> vis(n, false);
    long long ans = 0;
    int globaMin = *min_element(w.begin()+1, w.end());
    for (int i = 0)
}