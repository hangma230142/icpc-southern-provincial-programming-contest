#include <iostream>
using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        if (c == 0) {
            cout << "NO CURVE" << '\n';
        } else if (c > 0) {
            cout << "CURVE UP" << '\n';
        } else {
            cout << "CURVE DOWN" << '\n';
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    solve();
    return 0;
}