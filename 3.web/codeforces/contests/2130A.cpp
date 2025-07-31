//Welcome to your new home, CLCer ItsQuasi!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        ll a[n + 5];
        int l0 = 0, l1 = 0;
        for (int i = 1; i <= n; ++i){
            cin >> a[i];
            if (a[i] == 0) l0++;
            else if (a[i] == 1) l1++;
        }
        int k = min(l0, l1);
        l0 -= k;
        l1 -= k;
        ll sum = k * 2 + l0 + l1;
        for (int i = 1; i <= n; ++i){
            if (a[i] != 0 && a[i] != 1) sum += a[i];
        }
        cout << sum << "\n";
    }
    return 0;
}