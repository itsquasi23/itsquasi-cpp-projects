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
    ll m = n;
    long double sum = 0;
    while (n--){
        ll a;
        cin >> a;
        sum = sum + (a * 1.0 / 100);
    }
    cout << fixed << setprecision(12) << sum / m * 100;
    return 0;
}