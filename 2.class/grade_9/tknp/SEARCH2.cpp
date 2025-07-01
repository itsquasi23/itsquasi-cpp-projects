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
    int n, q;
    cin >> n >> q;
    for (int i = 1; i <= n; ++i){
        cin >> a[i];
    }
    sort (a + 1, a + 1 + n);
    while (q--){
        ll b;
        cin >> b;
        int l = 1, r = n;
        int res = 0;
        while (l <= r){
            int mid = l + r >> 1;
            if (a[mid] >= b){
                res = mid;
                r = mid - 1;
            }
            else l = mid + 1;
        }
        cout << res << "\n";
    }
    return 0;
}