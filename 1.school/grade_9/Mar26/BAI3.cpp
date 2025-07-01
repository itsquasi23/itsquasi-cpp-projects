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
    string a;
    cin >> a;
    ll mxs = 1, pos = 1;
    for (int i = 0; i < a.size(); ++i){
        unordered_map<char,ll> cnt;
        cnt[a[i]]++;
        int s = 1;
        for (int j = i + 1; j < a.size(); ++j){
            cnt[a[j]]++;
            if (cnt[a[j]] > 1){
                if (mxs < s){
                    mxs = s;
                    pos = i + 1;
                }
                else break;
            }
            else s++;
        }
    }
    cout << pos << " " << mxs;
    return 0;
}