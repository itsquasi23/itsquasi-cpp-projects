//Goal: Get into CLC
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll a[1000006];
unordered_map<ll,ll> kien;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i){
        cin >> a[i];
    }
    int mx = 0;
    for (int i = 1, j = 1; j <= n; ++j){
        kien[a[j]]++;
        while (kien[a[j]] >= 3){
            kien[a[i]]--;
            i++;
        }
        mx = max(mx, j - i + 1);
    }
    cout << mx;
    return 0;
}