#include <bits/stdc++.h>

using namespace std;

#define intt long long

const intt maxx = 100005;

struct data {
  intt value;
  struct data *Left, *Right;
};

intt n, arr[maxx];
data *t[maxx];

void build (data &t, intt l, intt r) {
    if (l == r) {
        t.value = arr[r];
        t.Left = t.Right = NULL;
        return;
    }
    intt mid = (l + r) >> 1;
    t.Left = new data();
    build (*t.Left, l, mid);
    t.Right = new data();
    build (*t.Right, mid + 1, r);
}

void update(data &t, intt l, intt r, intt pos, intt value) {
    if (l == r) {
        t.value = value;
        return;
    }
    intt mid = (l + r) >> 1;
    if (pos <= mid) {
        data *Left = new data();
        *Left = *t.Left;
        t.Left = Left;
        update (*Left, l, mid, pos, value);
    } else {
        data *Right = new data();
        *Right = *t.Right;
        t.Right = Right;
        update (*Right, mid + 1, r, pos, value);
    }
}

intt get (data &t, intt l, intt r, intt pos) {
    if (l == r)
        return t.value;
    intt mid = (l + r) >> 1;
    if (pos <= mid)
        return get (*t.Left, l, mid, pos);
    else
        return get (*t.Right, mid + 1, r, pos);
}

int main() {
    cin >> n;
    for (intt i = 1; i <= n; i++)
        cin >> arr[i];
    t[0] = new data ();
    build (*t[0], 0, n);
    intt m, idx = 1;
    cin >> m;
    while (m --) {
        string s;
        cin >> s;
        if (s[0] == 'c') {
            intt ver, pos, value;
            cin >> ver >> pos >> value;
            data *node = new data();
            *node = *t[ver-1];
            t[idx] = node;
            update (*t[idx++], 0, n, pos, value);
        } else {
            intt ver, pos;
            cin >> ver >> pos;
            cout << get (*t[ver - 1], 0, n, pos) << endl;
        }
    }
    return 0;
}
