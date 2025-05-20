//2025 = 45² = (20+25)² = 5²*9² = (1+2+3+4+5+6+7+8+9)² = 1³+2³+3³+4³+5³+6³+7³+8³+9³
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

unordered_map<ll,ll> kien;

int main()
{
    /*if (fopen(".inp","r"))
    {
        freopen(".inp", "r", stdin);
        freopen(".out", "w", stdout);
    }*/
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    //Code goes here:
    ll n;
    cin >> n;
    ll mx = 0;
    while (n--){
        string a;
        cin >> a;
        ll cnt = 0;
        for (int i = 0; i < a.size(); ++i){
            if (a[i] != 'W' && a[i] != 'A' && a[i] != 'R'){
                cnt++;
            }
            else {
                if (cnt){
                mx = max(mx,cnt);
                kien[cnt]++;
                cnt = 0;
                }
            }
        }
        if (cnt){
        mx = max(mx,cnt);
        kien[cnt]++;
        }
    }
    cout << mx << " " << kien[mx];
    return 0;
}