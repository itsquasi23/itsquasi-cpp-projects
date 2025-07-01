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
    int t = 0, mx = 0;
    while (n--){
        string a;
        cin >> a;
        if (a == "ONLINE") t++;
        else mx = max(mx,t), t = 0;
    }
    mx = max(mx,t);
    cout << mx;
    return 0;
}