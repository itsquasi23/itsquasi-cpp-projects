//Chasing the goal...
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long
#define ld long double

using namespace std;

ll a[10][10];

int main()
{
    /*if (fopen(".inp","r"))
    {
        freopen(".inp", "r", stdin);
        freopen(".out", "w", stdout);
    }*/
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int p1, p2;
    for (int i = 1; i <= 5; ++i){
        for (int j = 1; j <= 5; ++j){
            cin >> a[i][j];
            if (a[i][j] == 1) p1 = i, p2 = j;
        }
    }
    cout << abs(p1 - 3) + abs(p2 - 3);
    return 0;
}