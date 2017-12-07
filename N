#include <bits/stdc++.h>

using namespace std;

#define intt long long

const intt MOD = 1000000007;

intt n, k, d;
intt dp[201][201];

int main() {
    cin >> n >> k >> d;
    dp[0][0] = 1;
    for (intt i = 0; i <= n; i++)
        for (intt j = 0; j <= k; j++)
            for (intt l = 1; l <= k; l++) {
                intt mx = max (j, l);
                dp[i + l][mx] = (dp[i + l][mx] + dp[i][j]) % MOD;
            }
    intt ans = 0;
    for (intt i = d; i <= k; i++)
        ans += dp[n][i], ans %= MOD;
    cout << ans << endl;
    return 0;
}
