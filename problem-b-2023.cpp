#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false);cin.tie(0);
typedef long long ll;

int main() {
    fast_io
    ll n; int k;
    cin >> n >> k;

    if (k == 1) {
        if (n < 10) cout << n << endl;
        else cout << -1 << endl;
        return 0;
    }

    vector<int> digits;
    ll nn = n;
    for (int d = 9; d >= 2; --d) {
        while (nn % d == 0 && digits.size() < k) {
            nn /= d;
            digits.push_back(d);
        }
    }

    if (nn > 1 || digits.size() > k) {
        cout << -1 << endl;
        return 0;
    }

    while (digits.size() < k) digits.push_back(1);
    sort(digits.begin(), digits.end());
    for (int d : digits) cout << d;
    cout << endl;

    return 0;
}