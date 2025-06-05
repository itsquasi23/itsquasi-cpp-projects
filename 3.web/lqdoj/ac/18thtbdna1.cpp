//Goal: Get into CLC
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    ll a,b;
    cin >> a >> b;
    if (a != b) cout << max(a,b);
    else cout << a * 2 - 1;
    return 0;
}