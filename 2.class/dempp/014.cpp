//2025 = 45² = (20+25)² = 5²*9² = (1+2+3+4+5+6+7+8+9)² = 1³+2³+3³+4³+5³+6³+7³+8³+9³
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

unordered_map<int,int> kien;

int main()
{
    /*if (fopen(".inp","r"))
    {
        freopen(".inp", "r", stdin);
        freopen(".out", "w", stdout);
    }*/
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    //Code goes here:
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i){
        int a;
        cin >> a;
        kien[a]++;
    }
    int mn = INT_MAX;
    bool f = 0;
    for (auto i : kien){
        if (i.second == 1) mn = min(mn,i.first), f = 1;
    }
    cout << (f ? mn : -1);
    return 0;
}