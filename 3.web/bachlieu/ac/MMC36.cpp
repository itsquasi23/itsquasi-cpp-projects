//Goal: Get into CLC
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll a;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    ll mx1 = 0, mx2 = 0, cnt1 = 0, cnt2 = 0;
    for (int i = 1; i <= n; ++i){
        cin >> a;
        if (a & 1){
            mx1 = max(mx1,a);
            cnt1++;
        }
        else {
            mx2 = max(mx2,a);
            cnt2++;
        }
    }
    cout << cnt2 << "\n" << cnt1 << "\n" << mx2 << "\n" << mx1;
    return 0;
}