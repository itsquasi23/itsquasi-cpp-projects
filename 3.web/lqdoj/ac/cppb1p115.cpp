//Welcome to your new home, CLCer ItsQuasi!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    ll n;
    cin >> n;
    if (n & 1) cout << n / 2 << " " << n / 2 + 1;
    else cout << n / 2 << " " << n / 2;
    return 0;
}