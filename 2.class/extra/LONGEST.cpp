//Goal: Get into CLC
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

struct kien{
    ll v;
    int i;
};

ll a[1000006];

kien sum[1000006];

bool op(kien a, kien b){
    if (a.v != b.v) return a.v < b.v;
    return a.i < b.i;
}

ll binary(int n, ll safe){
    int l = 1, r = n;
    int res = 0;
    while (l <= r){
        int mid = (l + r) / 2;
        if (sum[mid].v >= safe){
            res = mid;
            r = mid - 1;
        }
        else l = mid + 1;
    }
    return res;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n;
    ll s;
    cin >> n >> s;
    sum[0].v = 0, sum[0].i = 0;
    for (int i = 1; i <= n; ++i){
        cin >> a[i];
        sum[i].v = sum[i - 1].v + a[i];
        sum[i].i = i;
    }
    sort (sum, sum + 1 + n, op);
    /*for (int i = 0; i <= n; ++i){
        cout << sum[i].i << " " << sum[i].v << "\n";
    }*/
    int mxl = 0;
    for (int i = 1; i <= n; ++i){
        ll safe = sum[i].v - s;
        ll t = binary(i, safe);
        //cout << t << " " << sum[i].v - sum[t].v << "\n";
        mxl = max(mxl, sum[i].i - sum[t].i);
    }
    cout << mxl;
    return 0;
}
/*
8 7
6 8 -2 4 -5 1 9 3 
*/

/*
0 0
1 6
5 11
3 12
6 12
2 14
4 16
7 21
8 24
*/