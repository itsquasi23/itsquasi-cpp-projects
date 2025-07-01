//Chasing thegoal...
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
    int n;
    cin >> n;
    ll a = 0, s = 0;
    for (int i = 1; i <= n; ++i){
        a += i;
        s += a;
    }
    cout << s;
    return 0;
}