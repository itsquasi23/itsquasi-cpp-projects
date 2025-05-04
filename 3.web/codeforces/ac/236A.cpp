//Happy April 30!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long
#define ld long double

using namespace std;

map<char,ll> kien;

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
    for (char c : a){
        kien[c]++;
    }
    if (kien.size() & 1) cout << "IGNORE HIM!";
    else cout << "CHAT WITH HER!";
    return 0;
}