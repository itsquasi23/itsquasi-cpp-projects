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
    cin >> n >> q;
    a[0] = 0;
    for (int i = 1; i <= n; ++i){
        cin >> a[i];
        a[i] += a[i - 1];
    }
    while (q--){
        int l,r;
        cin >> l >> r;
        cout << a[r] - a[l - 1] << "\n";
    }
    return 0;
}