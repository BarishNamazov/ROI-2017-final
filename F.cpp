#include <bits/stdc++.h>
#define intt long long

using namespace std;

intt n, g, h, ans = 0;
pair <intt, intt> pr[10010];

bool cmp (pair <intt, intt> pr1, pair <intt, intt> pr2) {
    return pr1.first - pr1.second < pr2.first - pr2.second;
}

int main() {
    cin >> n >> g >> h;
    for (intt i = 1; i <= n; i++) {
        cin >> pr[i].first >> pr[i].second;
        ans += pr[i].first;
    }

    if (n < h + g) {
        cout << -1 << endl;
        return 0;
    }
    sort (pr + 1, pr + n + 1, cmp);
    intt k1 = n, k2 = 0, in = 1;
    while (k1 > g && pr[in].first - pr[in].second < 0) {
        ans -= pr[in].first - pr[in].second, in ++;
        k1 --, k2 ++;
    }
    while (k2 < h) {
        ans -= pr[in].first - pr[in].second, in ++;
        k2 ++;
    }
    cout << ans << endl;
    return 0;
}
