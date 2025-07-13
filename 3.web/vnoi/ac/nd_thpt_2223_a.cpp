//Welcome to your new home, CLCer ItsQuasi!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    if (fopen("sodep.inp","r"))
	{
	    freopen("sodep.inp", "r", stdin);
	    freopen("sodep.out", "w", stdout);
	}
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    ll n;
    cin >> n;
    ll t = 0;
    while (n){
        t += (n % 10);
        n /= 10;
    }
    if (t % 10 == 9) cout << 1;
    else cout << 0;
    return 0;
}