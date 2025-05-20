//Goal: Get into CLC
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long
#define ld long double

using namespace std;

string a;

int n;

void backtrack(int t){
    if (t > n){
        cout << a << "\n";
        return;
    }
    for (char i = '0'; i <= '1'; ++i){
        a.push_back(i);
        backtrack(t + 1);
        a.pop_back();
    }
}

int main()
{
    /*if (fopen(".inp","r"))
    {
        freopen(".inp", "r", stdin);
        freopen(".out", "w", stdout);
    }*/
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    cin >> n;
    backtrack(1);
    return 0;
}