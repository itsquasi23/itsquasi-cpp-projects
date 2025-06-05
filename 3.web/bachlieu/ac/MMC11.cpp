//Goal: Get into CLC
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    ll n;
    cin >> n;
    ll a;
    vector<ll> no3, no35;
    while (n--){
        cin >> a;
        if (a % 5 != 0 && a % 3 != 0) no35.push_back(a);
        if (a % 3 != 0) no3.push_back(a);
    }
    for (ll a : no3){
        cout << a << " ";
    }
    cout << "\n";
    for (ll a : no35){
        cout << a << " ";
    }
    return 0;
}