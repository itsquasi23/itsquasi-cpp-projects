//2025 = 45² = (20+25)² = 5²*9² = (1+2+3+4+5+6+7+8+9)² = 1³+2³+3³+4³+5³+6³+7³+8³+9³
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    /*if (fopen(".inp","r"))
    {
        freopen(".inp", "r", stdin);
        freopen(".out", "w", stdout);
    }*/
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    //Code goes here:
    string n;
    cin >> n;
    int k;
    cin >> k;
    k--;
    set<int,greater<int>> kien;
    for (char c : n){
        kien.insert(c - '0');
    }
    for (int i : kien){
        if (k == 0){
            cout << i;
            break;
        }
        --k;
    }
    return 0;
}