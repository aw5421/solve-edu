#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int n;
    cin >> n;
    if (n <= 3) {
        cout << n << "\n";
    } else if (n % 2 == 0) {
        cout << "3\n";
    } else {
        cout << "4\n";
    }
    return 0;
}
