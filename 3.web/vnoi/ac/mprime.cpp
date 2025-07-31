//Welcome to your new home, CLCer ItsQuasi!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

bool prime[10000006];

vector<ll> pr;

void sieve(){
    prime[1] = prime[0] = 1;
    for (int i = 2; i * i < 10000006; ++i){
        if (!prime[i]){
            for (int j = i * i; j < 10000006; j += i){
                prime[j] = 1;
            }
        }
    }
    for (int i = 2; i < 10000006; ++i){
        if (!prime[i]) pr.push_back(i);
    }
}

ll nt(string l){
    ll x = stoll(l);
    if (x == 2 || x == 3) return 1;
    if (x < 3 || x % 2 == 0 || x % 3 == 0) return 0;
    for (ll i = 5; i * i <= x; ++i){
        if (x % i == 0 || x % (i + 2) == 0) return 0;
    }
    return 1;
}

int main()
{
    //ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    sieve();
    ll k;
    cin >> k;
    int j = 0;
    string res;
    for (int i = 1; i < pr.size(); i += 2){
        string l = to_string(pr[i - 1]) + to_string(pr[i]);
        //cout << l << "\n";
        if (nt(l)) j++, res = l;
        if (j >= k || j >= 500) break;
    }
    cout << res;
    return 0;
}