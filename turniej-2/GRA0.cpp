#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> point;

double calcDist(point a, point b) {
    int xdist = abs(a.first - b.first);
    int ydist = abs(a.second - b.second);
    return sqrt(xdist * xdist + ydist * ydist);
}

int main(int argc, char const *argv[]) {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int n, q;

    cin >> n;
    vector<point> pts(n);
    for (int i = 0; i < n; i++) {
        cin >> pts[i].first >> pts[i].second;
    }

    cin >> q;
    for (int i = 0; i < q; i++) {
        point a, b;
        cin >> a.first >> a.second >> b.first >> b.second;
        cout << calcDist(a, b) << "\n";
    }

    return 0;
}
