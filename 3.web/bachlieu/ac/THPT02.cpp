//Goal: Get into CLC
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    string a;
    getline(cin, a);
    string order;
    ll hashtag = 0;
    for (int i = a.size() - 1; i >= 0; --i){
        if (a[i] == '#') hashtag++;
        else {
            if (hashtag){
                hashtag--;
            }
            else order = a[i] + order;
        }
    }  
    cout << order;
    return 0;
}