#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int x, y, n;
    cin >> x >> y >> n;
    vector<vector<bool>> pole(x, vector<bool>(y, 0));
    while (n--) {
        int a, b, x, y;
        cin >> a >> b >> x >> y;
        for (int i = min(a, x); i <= max(a, x); i++) {
            for (int j = min(b, y); j <= max(b, y); j++) {
                pole[i - 1][j - 1] = true;
            }
        }
    }
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            cout << pole[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
