//Goal: Get into CLC
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll a[1000006];

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i){
        cin >> a[i];
    }
    sort(a, a + n);
    vector<ll> kien;
    kien.push_back(a[0]);
    ll last = a[0];
    for (int i = 1; i < n; ++i){
        if (a[i] != last) kien.push_back(a[i]), last = a[i];
    }
    cout << kien.size() << "\n";
    for (auto i : kien){
        cout << i << " ";
    }
    return 0;
}