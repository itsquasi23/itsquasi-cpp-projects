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
    int c = 0;
    while (n--){
        ll a;
        cin >> a;
        if (a % 2 == 0){
            c++;
        }
    }
    cout << c;
    return 0;
}