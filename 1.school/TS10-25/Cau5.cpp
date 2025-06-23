//Goal: Get into CLC
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

struct kien{
    ll v,i;
};

kien a[1000006];

ll b[1000006], pref[1000006];

bool op(kien a, kien b){
    return a.v < b.v;
}

bool op2(kien a, kien b){
    return a.i < b.i;
}

/*int finder(int m, int lev){
    int l = 1, r = m;
    int res = 0;
    while (l <= r){
        int mid = (l + r) / 2;
        if (a[lev] + pref[mid - 1] >= b[mid]){
            res = mid;
            l = mid + 1;   
        }
        else r = mid - 1;
    }
    return res;
}*/

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n,m;
    cin >> n >> m;
    for (int i = 1; i <= n; ++i){
        cin >> a[i].v;
        a[i].i = i;
    }
    pref[0] = 0;
    for (int i = 1; i <= m; ++i){
        cin >> b[i];
    }
    sort (b + 1, b + 1 + m);
    for (int i = 1; i <= m; ++i){
        pref[i] = pref[i - 1] + b[i];
    }
    sort (a + 1, a + 1 + n, op);
    int j = 1;
    for (int i = 1; i <= n; ++i){
        while (j <= m){
            if (a[i].v + pref[j - 1] >= b[j]) j++;
            else break;
        }
        a[i].v += pref[j - 1];
    }
    sort (a + 1, a + 1 + n, op2);
    for (int i = 1; i <= n; ++i){
        cout << a[i].v << " ";
    }
    return 0;
}