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
    int n;
    ll c;
    cin >> n >> c;
    string s;
    cin >> s;
    unordered_map<char,int>kien;
    int l = 0, r = 0, mxlen = 0;
    ll val = 0;
    while (r < n){
        for (auto i : kien){
            if (i.first != s[r]){
                val += i.second;
            }
        }
        kien[s[r]]++;
        while (val > c){
            kien[s[l]]--;
            if (kien[s[l]] == 0) {
                kien.erase(s[l]);
            }
            val = 0;
            for (auto i : kien){
                for (auto j : kien){
                    if (i.first < j.first){
                        val += i.second * j.second;
                    }
                }
            }
            ++l;
        }
        mxlen = max(mxlen, r - l + 1);
        ++r;
    }
    cout << mxlen;
    return 0;
}