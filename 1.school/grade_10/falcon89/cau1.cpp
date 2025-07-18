//Welcome to your new home, CLCer ItsQuasi!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    string a;
    cin >> a;
    a = ' ' + a;
    int pos = 1;
    ll sum = 0;
    for (int i = 1; i < a.size(); ++i){
        if (a[i] == '?') pos = i;
        else sum += i * (a[i] - '0');
    }
    int start = 0;
    if (pos == 1) start = 1;
    for (int i = start; i <= 9; ++i){
        if ((sum + pos * i) % 7 == 0){
            cout << i;
            return 0;
        }
    }
    cout << -1;
    return 0;
}