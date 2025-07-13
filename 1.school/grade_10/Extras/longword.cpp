//Welcome to your new home, CLCer ItsQuasi!
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
        if (a.size() > 10){
            cout << a[0] << a.size() - 2 << a[a.size() - 1] << "\n";
        }
        else cout << a << "\n";
    }
    return 0;
}