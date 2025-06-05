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
    int t = 1, s = 2;
    while (t < n){
        t += s;
        s++;
    }
    if (t > n) cout << "NO";
    else cout << "YES";
    return 0;
}