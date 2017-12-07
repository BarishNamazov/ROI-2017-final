#include <bits/stdc++.h>

#define intt long long

using namespace std;

int main() {
    intt a, b;
    cin >> a >> b;
    intt res = b * (b + 1) / 2 - a * (a - 1) / 2;
    cout << res << endl;
    return 0;
}
