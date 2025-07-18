//Welcome to your new home, CLCer ItsQuasi!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

unordered_map<char,bool> fob;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int k,q;
    cin >> k;
    while (k--){
        char c;
        cin >> c;
        fob[c] = 1;
    }
    cin >> q;
    while (q--){
        string a;
        cin >> a;
        string b = "", replacement = "";
        for (int i = 0; i < a.size(); ++i){
            if(!fob[a[i]]) b = a[i] + b;
            else {
                replacement += b;
                b = "";
            }
        }
        replacement += b;
        cout << replacement << "\n";
    }
    return 0;
}