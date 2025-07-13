//Welcome to your new home, CLCer ItsQuasi!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    if (fopen("QUA.inp","r"))
	{
	    freopen("QUA.inp", "r", stdin);
	    freopen("QUA.out", "w", stdout);
	}
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    ll t = 0;
    vector<ll> kien;
    while (n--){
        ll a;
        cin >> a;
        if (a == 6 || a == 28 || a == 496 || a == 8128 || a == 33550336) t++, kien.push_back(a);
    }
    cout << t << "\n";
    for (ll i : kien){
        cout << i << " ";
    }
    return 0;
}