#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <climits>

using namespace std;

void solve() {
    long long A, B, C, D;
    if (!(cin >> A >> B >> C >> D)) return;

    vector<long long> divisors;
    long long limit = sqrt(C);
    for (long long i = 1; i <= limit; ++i) {
        if (C % i == 0) {
            divisors.push_back(i);
            if (i * i != C) {
                divisors.push_back(C / i);
            }
        }
    }

    long long n_min = -1;
    for (long long n : divisors) {
        bool cond1 = (n % A == 0);
        bool cond2 = (n % B != 0);
        bool cond4 = (D % n != 0);

        if (cond1 && cond2 && cond4) {
            if (n_min == -1 || n < n_min) {
                n_min = n;
            }
        }
    }

    cout << n_min << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}