//Goal: Get into CLC
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long
#define ld long double

using namespace std;

int main()
{
    /*if (fopen(".inp","r"))
    {
        freopen(".inp", "r", stdin);
        freopen(".out", "w", stdout);
    }*/
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    ll n, c = 0;
    cin >> n;
    for (int i = 1; i <= n / 2; ++i){
        int j = n - i;
        if (i % j == 0 || j % i == 0) c+=2;
        if (j == i) c--;
    }
    cout << c;
    return 0;
}