//Goal: Get into CLC
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

struct kien{
    ll i,v;  
};

kien a[1000006];

bool op(kien a, kien b){
    if (a.v == b.v) return a.i > b.i;
    return a.v < b.v;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n;
    ll m;
    cin >> n >> m;
    for (int i = 1; i <= n; ++i){
        cin >> a[i].i >> a[i].v;
    }
    sort(a + 1, a + 1 + n, op);
    ll p = 0;
    for (int i = 1; i <= n; ++i){
        if (m > 0){
            p += min(a[i].i,m) * a[i].v;
            m -= min(a[i].i,m);
        }
    }
    cout << p;
    return 0;
}