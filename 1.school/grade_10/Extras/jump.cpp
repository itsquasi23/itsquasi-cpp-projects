//Welcome to your new home, CLCer ItsQuasi!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll a[1000006], vt[1000006], c[1000006];

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n,q;
    cin >> n >> q;
    for (int i = 1; i <= n; ++i){
        cin >> a[i];
    }
    stack<ll> st;
    for (int i = n; i >= 1; --i){
        while (!st.empty() && a[st.top()] <= a[i]) st.pop();
        vt[i] = st.empty() ? 0 : st.top();
        st.push(i);
        
    }
    for (int i = n; i >= 1; --i){
        c[i] = (vt[i] == 0) ? 0 : c[vt[i]] + 1;
    }
    while (q--){
        ll x;
        cin >> x;
        cout << c[x] << "\n";
    }
    return 0;
}