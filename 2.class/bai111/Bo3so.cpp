//Chasing the goal...
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
    int n, t = 0;
    cin >> n;
    while (n--){
        int a,b,c;
        cin >> a >> b >> c;
        if (a + b != c && a + c != b && b + c != a) ++t;
    }
    cout << t;
    return 0;
}