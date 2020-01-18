#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int boki[4];
    for (int i = 0; i < 4; i++) {
        cin >> boki[i];
    }
    sort(boki, boki + 4);
    if (boki[0] == boki[1] && boki[2] == boki[3]) {
        cout << "TAK\n";
    } else {
        cout << "NIE\n";
    }
    return 0;
}
