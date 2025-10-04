#include <iostream>
using namespace std;

int main() {
    int M, N, p, q;
    cin >> M >> N >> p >> q;

    int answer = 0;
    for (int i = max(1, p-1); i <= min(M, p+1); ++i) {
        for (int j = max(1, q-1); j <= min(N, q+1); ++j) {
            if (i == p && j == q) continue;
            answer++;
        }
    }
    cout << answer << endl;
    return 0;
}