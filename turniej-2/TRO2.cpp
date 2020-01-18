#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int boki[3];
    for (int i = 0; i < 3; i++) {
        cin >> boki[i];
    }
    sort(boki, boki + 3);
    int a = boki[0] * boki[0];
    int b = boki[1] * boki[1];
    int c = boki[2] * boki[2];
    if (a + b > c) {
        cout << "O\n";
    } else if (a + b == c) {
        cout << "P\n";
    } else {
        cout << "R\n";
    }
    return 0;
}
