#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int MAXN = 105;
long long BIT[MAXN][MAXN][MAXN];
long long A[MAXN][MAXN][MAXN];
int n;

void update(int x, int y, int z, long long delta) {
    for (int i = x; i <= n; i += i & -i)
        for (int j = y; j <= n; j += j & -j)
            for (int k = z; k <= n; k += k & -k)
                BIT[i][j][k] += delta;
}

long long sumPrefix(int x, int y, int z) {
    long long res = 0;
    for (int = i = x; i > 0; i -= i & -i)
        for (int j = y; j > 0; j -= j & -j)
            for (int k = z; k > 0; k -= k & -k)
                res += BIT[i][j][k];
    return res;
}

long long query(int x1,int y1,int z1,int x2,int y2, int z2) {
    auto S = [&](int x,int y,int z){ return sumPrefix(x,y,z); };
    return S(x2,y2,z2)
            - S(x1-1,y2,z2) - S(x2,y1-1,z2) - S(x2,y2,z1-1)
            + S(x1-1,y1-1,z1-1) + S(x1-1,y2,z1-1) + S(x2,y1-1,z1-1)
            - S(x1-1,y1-1,z1-1);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; cin >> T;
    while (T--) {
        int m; cin >> n >> m;
        memset(BIT,0,sizeof(BIT));
        memset(A,0,sizeof(A));
        for (int i=0;i<m;i++) {
            string op; cin >> op;
            if (op=="UPDATE") {
                int x,y,z; long long w;
                cin >> x >> y >> z >> w;
                long long delta = w - A[x][y][z];
                A[x][y][z] = w;
                update(x,y,z,delta);
            } else {
                int x1,y1,z1,x2,y2,z2;
                cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;
                cout << query(x1,y1,z1,x2,y2,z2) << "\n";
            }
        }
    }
}