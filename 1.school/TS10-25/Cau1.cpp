//Goal: Get into CLC
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int a;
    cin >> a;
    while (a--){
        ll t;
        cin >> t;
        cout << t / 3 + t / 5 - t / 15 << "\n";
    }
    return 0;
}