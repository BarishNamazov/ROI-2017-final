#include <bits/stdc++.h>
#define intt long long

using namespace std;

intt sod (intt n) {
    if (n == 0) return 12;
    return n;
}

int main() {
    intt h1, m1, h2, m2;
    cin >> h1 >> m1 >> h2 >> m2;
    intt h = 0, m = 0, ans = 0;
    while (h != 25) {
        if (h >= h1 && h <= h2) {
            if (h == h1 && m < m1 || h == h2 && m > m2) {;}
            else {
                if (m == 0)
                    ans += sod (h % 12);
                else
                    ans += 1;
                /// cout << h << ":" << m << endl;
            }
        }
        m += 30;
        m %= 60;
        if (m == 0)
            h ++;
    }
    cout << ans << endl;
    return 0;
}
