//Goal: Get into CLC
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    ll a,b;
    while (cin >> a >> b){
        if (b == 0) cout << "-1\n";
        else if (a % b == 0) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}