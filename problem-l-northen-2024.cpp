#include <iostream>
#include <map>
using namespace std;

const int MOD = 1e9 + 7;

int main() {
    int n;
    cin >> n;
    map<int, int> c;
    long long ans = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        ans += c[x];
        c[x] += 1;
    }
    cout << ans % MOD << endl;
    return 0;
}