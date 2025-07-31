//Welcome to your new home, CLCer ItsQuasi!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    ll x = 0, y = 0, z = 0;
    while (n--){
        ll a, b, c;
        cin >> a >> b >> c;
        x += a, y += b, z += c;
    }
    if (x == 0 && y == 0 && z == 0) cout << "YES";
    else cout << "NO";
    return 0;
}