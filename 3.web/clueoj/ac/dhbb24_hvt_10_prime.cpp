//Welcome to your new home, CLCer ItsQuasi!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

const int MAX = 1'000'006;
bool prime[MAX];
vector<ll> pr, res;

void sieve() {
    prime[0] = prime[1] = 1;
    for (int i = 2; i * i < MAX; ++i) {
        if (!prime[i]) {
            for (int j = i * i; j < MAX; j += i)
                prime[j] = 1;
        }
    }
    for (int i = 2; i < MAX; ++i) {
        if (!prime[i]) pr.push_back(i);
    }
}

void finder() {
    for (size_t i = 0; i < pr.size(); ++i) {
        for (size_t j = 0; j < i; ++j) {
            ll x = pr[i] * pr[j];
            if (x >= MAX) break;
            res.push_back(x);
        }
    }
    sort(res.begin(), res.end());
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    sieve();
    finder();

    int n;
    cin >> n;
    while (n--) {
        ll t;
        cin >> t;
        int j = lower_bound(res.begin(), res.end(), t) - res.begin();
        if (j == res.size()) j--;        // if t > all res
        if (res[j] != t) j--;            // if t not in res
        if (j >= 0) cout << res[j] << "\n";
        else cout << "0\n";              // or whatever fallback you want
    }

    return 0;
}
