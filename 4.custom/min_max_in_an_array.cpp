//2025 = 45² = (20+25)² = 5²*9² = (1+2+3+4+5+6+7+8+9)² = 1³+2³+3³+4³+5³+6³+7³+8³+9³
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

const int ARR = 1000006;

ll a[ARR], range[ARR];
deque<ll>dq;

int main()
{
    /*if (fopen(".inp","r"))
    {
        freopen(".inp", "r", stdin);
        freopen(".out", "w", stdout);
    }*/
    //ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    //Code goes here:
    cout << "find min or max? input \"min\" or \"max\": ";
    string input;
    cin >> input;
    if (input != "min" && input != "max"){
        cout << "invalid!\n";
        return 0;
    }
    cout << "input n and k: ";
    int n,k;
    cin >> n >> k;
    cout << "input an array of " << n << " numbers: ";
    for (int i = 1; i <= n; ++i){
        cin >> a[i];
    }
    while (dq.size()) dq.pop_front();
    if (input == "min"){
        for (int i = 1; i <= n; ++i){
            while (dq.size() && a[dq.back()] >= a[i]) dq.pop_back();
            dq.push_back(i);
            if (dq.front() + k <= i) dq.pop_front();
            if (i >= k) range[i] = a[dq.front()];
        }
    }
    else if (input == "max"){
        for (int i = 1; i <= n; ++i){
            while (dq.size() && a[dq.back()] <= a[i]) dq.pop_back();
            dq.push_back(i);
            if (dq.front() + k <= i) dq.pop_front();
            if (i >= k) range[i] = a[dq.front()];
        }
    }
    for (int i = k; i <= n; ++i){
        cout << range[i] << " ";
    }
    return 0;
}