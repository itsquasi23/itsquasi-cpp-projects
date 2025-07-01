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
    string a;
    getline(cin,a);
    vector<string> kien;
    stringstream ss(a);
    string x;
    int t = 0;
    while (ss >> x){
        t++;
        kien.push_back(x);
    }
    cout << t << "\n";
    for (string x : kien){
        cout << x << "\n";
    }
    return 0;
}