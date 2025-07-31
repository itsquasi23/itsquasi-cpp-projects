#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#define ll long long
int n;
std::vector<ll> a;
namespace sub4
{
    std::vector<ll> res(n, 0); // save result
    void solve()
    {
        for (ll x = 1; x <= sqrt(a.back()); x++)
        {
            ll f = ((a[0] + x - 1) / x) * x; // get first a[i] divide x
            while (f <= a.back())
            { // a array is a continous natural number
                res[f - a.front()] += x + f / x;
                f += x; // next a[i] divide x
            }
        }
        for (auto &i : res)
        {
            std::cout << i << ' ';
        }
    }
}
namespace sub3
{
    int uoc[1000005];
    void build()
    {
        for (int i = 1; i <= 1e6; i++)
        {
            for (int j = i; j <= 1e6; j += i)
            {
                uoc[j] += i;
            }
        }
    }
    void solve()
    {
        build();
        for (auto &i : a)
        {
            std::cout << uoc[i] << ' ';
        }
    }
}
void solve()
{
    std::cin >> n;
    a.resize(n);
    for (auto &i : a)
    {
        std::cin >> i;
    }
    // if(*std::max_element(a.begin(), a.end())<=1e6) {
    //     sub3::solve();
    // }
    // else {
    sub4::solve();
    // }
}
main()
{
    std::cin.tie(0)->sync_with_stdio(0);
    solve();
}