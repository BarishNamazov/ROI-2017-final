#include <bits/stdc++.h>

using namespace std;

#define intt long long

int main() {
    intt n, bad;
    cin >> n >> bad;
    intt ans = 0;
    for (intt i = 1; i <= n; i++) {
        ans += i;
        if (ans == bad)
            ans --;
    }
    cout << ans << endl;
    return 0;
}
