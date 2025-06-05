//Goal: Get into CLC
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll pref[1000006];

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    string a;
    cin >> a;
    ll n = a.size();
    a = ' ' + a;
    for (int i = 1; i <= n; ++i){
        if (a[i] >= 'a' && a[i] <= 'z') pref[i] = pref[i - 1] + 1;
        else if (a[i] >= '0' && a[i] <= '9') pref[i] = pref[i - 1] + (a[i] - '0');
    }
    ll mn = LLONG_MAX, mxd = 0;
    for (int i = 1; i <= n; ++i){
        ll sum1 = pref[i - 1], sum2 = pref[n] - pref[i - 1];
        //cout << sum1 << " + " << sum2 << " = " << sum1 + sum2 << "\n";
        mxd = max(sum1,sum2);
        mn = min(mn,mxd);
    }
    cout << mn;
    return 0;
}