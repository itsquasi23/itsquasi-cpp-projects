//Goal: Get into CLC
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    while (n--){
        string a;
        cin >> a;
        unordered_map<char,ll> cnt;
        for (int i = 0; i < a.size(); ++i){
            cnt[a[i]]++;
        }
        bool f = 0;
        for (int i = 0; i < a.size(); ++i){
            if (cnt[a[i]] == 1){
                cout << i + 1 << "\n";
                f = 1;
                break;
            }
        }
        if (!f) cout << -1 << "\n";
    }
    return 0;
}