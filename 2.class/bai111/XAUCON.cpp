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
    int n, c;
    cin >> n >> c;
    string a;
    cin >> a;
    int t = 0;
    for (int i = 0; i < a.size(); ++i){
        ll sum = 0;
        for (int j = i; j < a.size(); ++j){
            sum += a[j];
            if (sum >= c) ++t;
        }
    }
    cout << t;
    return 0;
}