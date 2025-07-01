//Chasing the goal...
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long
#define ld long double

using namespace std;

ll a[1000006];

int main()
{
    /*if (fopen(".inp","r"))
    {
        freopen(".inp", "r", stdin);
        freopen(".out", "w", stdout);
    }*/
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i){
        cin >> a[i];
    }
    ll mx_sf = a[1], mx_eh = a[1];
    int c = 1, mxc = 1;
    for (int i = 2; i <= n; ++i){
        if (a[i] >= a[i - 1]) mx_eh += a[i], ++c;
        else mx_eh = a[i], c = 1;
        if (c > mxc){
            mxc = c;
            mx_sf = mx_eh;
        }
        else if (c == mxc) mx_sf = max(mx_sf, mx_eh);
    }
    cout << mx_sf;
    return 0;
}