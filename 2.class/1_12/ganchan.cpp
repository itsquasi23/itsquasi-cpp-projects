//Goal: Get into CLC
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long
#define ld long double

using namespace std;

ll sum(string x){
    ll t = 0;
    for (char c : x){
        t += c - '0';
    }
    return t;
}

int main()
{
    /*if (fopen(".inp","r"))
    {
        freopen(".inp", "r", stdin);
        freopen(".out", "w", stdout);
    }*/
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    string a;
    cin >> a;
    if ((a[a.size() - 1] - '0') & 1 && !(sum(a) & 1)) cout << 1;
    else cout << 0;
    return 0;
}