//Goal: Get into CLC
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n, c = 0;
    ll x;
    cin >> n >> x;
    while (n--){
        ll a;
        cin >> a;
        if (a >= x) c++;
    }
    cout << c;
    return 0;
}