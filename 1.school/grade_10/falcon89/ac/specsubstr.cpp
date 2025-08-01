//Welcome to your new home, CLCer ItsQuasi!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

bool vowel(char c){
    if (c == 'u' || c == 'e' || c == 'o' || c == 'a' || c == 'i') return 1;
    return 0;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    string a;
    cin >> a;
    ll t = 0;
    ll v1 = 0, v2 = 0;
    for (int i = 0; i < a.size(); ++i){
        if (vowel(a[i])) t += v1, v2++;
        else t += v2, v1++;
    }
    cout << t;
    return 0;
}