//Chasing the goal...
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long
#define ld long double

using namespace std;

int euclid_gcd(int a, int b)
{
    return (b ? euclid_gcd(b, a % b) : a);
}

int lame_gcd(int a, int b)
{
    if (!a || !b) return a | b;
    int shift = __builtin_ctz(a | b);
    a >>= __builtin_ctz(a);
    do
    {
        b >>= __builtin_ctz(b);
        if (a > b)
            swap(a, b);
        b -= a;
    } while (b);

    return a << shift;
}

int main()
{
    /*if (fopen(".inp","r"))
    {
        freopen(".inp", "r", stdin);
        freopen(".out", "w", stdout);
    }*/
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int a,b;
    cin >> a >> b;
    cout << euclid_gcd(a,b) << "\n" << lame_gcd(a,b);
    return 0;
}