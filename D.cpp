#include <bits/stdc++.h>

using namespace std;

#define intt long long

const intt maxx = 30005;

intt n, a, x, ans;
intt arr[maxx];
int main() {
	cin>>n;
	for (intt i = 1; i <= n; i++)
        cin >> arr[i];
	sort (arr + 1, arr + n + 1);
	for (intt i = 1; i <= n; i++) {
	    a = 1, x = 0;
		while (i > a) {
			a *= arr[i] + 1;
			x++;
		}
		ans = max (ans, x);
	}
	cout << ans << endl;
    return 0;
}
