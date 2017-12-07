#include <bits/stdc++.h>

using namespace std;

#define intt long long

int main() {
    intt n, x, lol;
    cin >> n;
    for (intt t = 1; t <= n; t++) {
        cin >> lol;
        set <intt> S;
        for (intt i = 1; i <= 10; i++) {
            cin >> x;
            S.insert (x);
        }
        set <intt>::iterator it = S.end();
        it --; it --; it --;
        cout << lol << " " << *(it) << endl;
    }
    return 0;
}
