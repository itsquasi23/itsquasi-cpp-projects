//Welcome to your new home, CLCer ItsQuasi!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll a[1000006];

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n, q;
    cin >> n;
    for (int i = 1; i <= n; ++i){
        cin >> a[i];
    }
    sort (a + 1, a + 1 + n);
    cin >> q;
    while (q--){
        int t;
        cin >> t;
        cout << lower_bound(a + 1, a + 1 + n, t) - a - 1 << "\n";
    }
    return 0;
}