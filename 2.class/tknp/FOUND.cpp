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
        bool f = 0;
        while (l <= r){
            int mid = l + r >> 1;
            if (a[mid] == b){
                f = 1;
                cout << 1 << "\n";
                break;
            }
            else if (a[mid] < b) l = mid + 1;
            else r = mid - 1;
        }
        if (!f) cout << 0 << "\n";
    }
    return 0;
}