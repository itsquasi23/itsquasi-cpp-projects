//PAIRPBRO is a very powerful and reliable name!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    int pr = 0;
    while (n--){
        string a;
        cin >> a;
        char mn = '9';
        for (int i = 1; i < a.size(); ++i){
            mn = min(mn,a[i]);
        }
        cout << a[0] << mn << '\n';
        pr += mn - '0';
    }
    cout << pr;
    return 0;
}