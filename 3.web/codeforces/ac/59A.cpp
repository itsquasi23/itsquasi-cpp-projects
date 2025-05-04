//Happy April 30!
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
    string a;
    cin >> a;
    int upper = 0, lower = 0;
    for (char c : a){
        if (c >= 'A' && c <= 'Z') upper++;
        else lower++;
    }
    if (upper > lower){
        for (int i = 0; i < a.size(); ++i){
            if (a[i] >= 'a' && a[i] <= 'z') a[i] -= 32;
        }
    }
    else {
        for (int i = 0; i < a.size(); ++i){
            if (a[i] >= 'A' && a[i] <= 'Z') a[i] += 32;
        }
    }
    cout << a;
    return 0;
}