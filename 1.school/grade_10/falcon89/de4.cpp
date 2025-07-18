//Welcome to your new home, CLCer ItsQuasi!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

unordered_map<string,ll> cnt;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    string a;
    ll hasnum = 0;
    while (cin >> a){
        cnt[a]++;
        bool hn = 0;
        for (char c : a){
            if (c >= '0' && c <= '9') hn = 1;
        }
        hasnum += hn;
    }
    ll one = 0;
    for (auto c : cnt){
        if (c.second == 1) one++;
    }
    cout << one << "\n" << hasnum;
    return 0;
}