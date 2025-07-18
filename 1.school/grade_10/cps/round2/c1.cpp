#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    while (n--){
        int t;
        cin >> t;
        ll a[t + 5];
        for (int i = 1; i <= t; ++i){
            cin >> a[i];
        }
        bool f = 0;
        for (int i = 1; i < t; ++i){
            if (a[i] == a[i + 1]) f = 1;
            else{
                f = 0;
                break;
            }
        }
        if (f){
            cout << -1 << "\n";
            continue;
        }
        for (int i = 2; i <= t / 2; ++i){
            swap(a[i], a[t - (i - 1)]);
        }
        for (int i = 1; i <= t; ++i){
            cout << a[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}