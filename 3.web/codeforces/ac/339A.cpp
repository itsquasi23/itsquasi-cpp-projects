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
    string a;
    cin >> a;
    a = a + "!";
    vector<int> n;
    int x = 0;
    for (char d : a){
        if (d >= '0' && d <= '9'){
            x = d - '0';
        }
        else n.push_back(x);
    }
    sort(n.begin(), n.end());
    for (int i = 0; i < n.size() - 1; ++i){
        cout << n[i] << "+";
    }
    cout << n[n.size() - 1];
    return 0;
}