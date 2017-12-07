#include <bits/stdc++.h>

using namespace std;

#define intt long long

const intt max6 = 1000006;

set < pair < intt, intt > > S[1003];
intt cap[max6];
int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    intt n, L, q;
    cin >> n >> L >> q;
    for (intt i = 1; i <= n; i++)
        cin >> cap[i];
    intt l;
    for (intt i = 1; i <= n; i++) {
        cin >> l;
        S[l].insert ({cap[i], i});
    }
    set < pair <intt, intt> > :: iterator pos;
    while (q --) {
        intt v;
        cin >> l >> v;
        pos = S[l].lower_bound ({v, 1});
        if (pos == S[l].end()) {
            cout << -1 << endl;
            continue;
        }
        intt val = (*pos).first, in = (*pos).second;
        val -= v;
        S[l].erase (pos);
        S[l].insert ({val, in});
        cout << in << endl;
    }
    return 0;
}
