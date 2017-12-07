#include <bits/stdc++.h>

using namespace std;

#define intt long long

int main() {
    string s;
    cin >> s; s = '#' + s;
    intt ans1 = 0, ans2 = 0;
    for (intt i = 1; i <= s.size(); i++) {
        if (s[i] == '(')
            ans1 ++;
        else if (s[i] == ')' && !ans1)
            ans2 ++;
        else if (s[i] == ')' && ans1)
            ans1 --;
    }
    cout << ans1 + ans2 << endl;
    return 0;
}
