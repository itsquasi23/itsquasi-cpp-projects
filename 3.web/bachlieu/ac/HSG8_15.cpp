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
    ll n, c = 0, num = 0, num2 = 1;
    cin >> n;
    for (int i = 1; i <= 9; ++i){
        num = num * 10 + 9;
        if (num <= n){
            c += (num - num2 + 1) * i;
        }
        else {
            c += (n - num2 + 1) * i;
            break;
        }
        num2 = num2 * 10;
    }
    cout << c;
    return 0;
}