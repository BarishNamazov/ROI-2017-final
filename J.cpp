#include <bits/stdc++.h>

using namespace std;

#define intt long long

const intt maxx = 55;

intt arr[maxx], mx = -1 * 2000000000;

bool powof2 (intt n) {
    return ceil(log2(1.0 * n)) == floor (log2(1.0 * n));
}

int main() {
    intt n;
    cin >> n;
    for (intt i = 1; i <= n; i++) {
        cin >> arr[i];
        mx = max (mx, arr[i]);
    }
    for (intt i = 1; i <= n; i++) {
        if (mx % arr[i] != 0) {
            cout << "NO" << endl;
            return 0;
        }
        if (!powof2(mx / arr[i])) {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}
