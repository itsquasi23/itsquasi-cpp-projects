//Goal: Get into CLC
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long
#define ld long double

using namespace std;

string a;

char hex(ll x){
    if (x >= 0 && x <= 9) return (x + '0');
    if (x == 10) return 'A';
    if (x == 11) return 'B';
    if (x == 12) return 'C';
    if (x == 13) return 'D';
    if (x == 14) return 'E';
    return 'F';
}

int main()
{
    /*if (fopen(".inp","r"))
    {
        freopen(".inp", "r", stdin);
        freopen(".out", "w", stdout);
    }*/
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    ll n;
    cin >> n;
    while (n){
        a = hex(n % 16) + a;
        n /= 16;
    }
    cout << a;
    return 0;
}