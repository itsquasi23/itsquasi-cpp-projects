//Goal: Get into CLC
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    ll n;
    cin >> n;
    cout << "Bang cuu chuong " << n << "\n";
    for (int i = 1; i <= 10; ++i){
        cout << n << " X " << i << " = " << n * i << "\n";
    }
    return 0;
}