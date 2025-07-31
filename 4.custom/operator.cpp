//Welcome to your new home, CLCer ItsQuasi!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

stack<ll> val;
stack<char> op;

ll priority(char op){
    if (op == '+' || op == '-') return 1;
    else return 2;
}

void process(char op){
    ll r = val.top(); val.pop();
    ll l = val.top(); val.pop();
    switch(op){
        case '+': val.push(l + r); break;
        case '-': val.push(l - r); break;
        case '*': val.push(l * r); break;
        case '/': val.push(l / r); break;
    }
}

void ev(string s){
    for (int i = 0; i < s.size(); ++i){
        if (isdigit(s[i])){
            ll num = 0;
            while(i < s.size() && isdigit(s[i])){
                num = num * 10 + s[i] - '0';
                ++i;
            }
            val.push(num);
            i--;
        }
        else{
            char cur = s[i];
            while (!op.empty() && priority(op.top()) >= priority(cur)){
                process(op.top());
                op.pop();
            }
            op.push(s[i]);
        }
    }
    while (!op.empty()){
        process(op.top());
        op.pop();
    }
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    string s;
    cin >> s;
    ev(s);
    cout << val.top();
    return 0;
}