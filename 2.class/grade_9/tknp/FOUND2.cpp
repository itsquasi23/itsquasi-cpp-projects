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
    /* for (int i = 1; i <= n; ++i){
        cout << a[i] << " ";
    }
    cout << "\n"; */
    while (q--){
        ll b;
        cin >> b;
        int l = 1, r = n;
        int res = 0, res1 = 0;
        while (l <= r){
            int mid = l + r >> 1;
            if (a[mid] <= b){
                res = mid;
                l = mid + 1;
            }
            else r = mid - 1;
        }
        l = 1, r = n;
        while (l <= r){
            int mid = l + r >> 1;
            if (a[mid] >= b){
                res1 = mid;
                r = mid - 1;
            }
            else l = mid + 1;
        }
        //cout << res1 << " " << res << " ";
        if (a[res1] != a[res] && a[res1] != b && a[res] != b){
        res1 = 1, res = 0;
        }
        cout << res - res1 + 1 << "\n";
    }
    return 0;
}