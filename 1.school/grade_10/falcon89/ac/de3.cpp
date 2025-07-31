//Welcome to your new home, CLCer ItsQuasi!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    string s;
    cin >> s;
    ll sum = 0;
    for (int i = 0; i < s.size(); ++i){
        if (s[i] >= '0' && s[i] <= '9') sum += s[i] - '0';
    }
    if (sum & 1) cout << "Odd" << sum;
    else cout << "Even" << sum;
    return 0;
}