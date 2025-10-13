#ifndef IHXNAN_FENWICK
#define IHXNAN_FENWICK

#include <vector>

template <class T> class Fenwick
{
    std::vector<T> tree;
    int n;

    T lowbit(int x)
    {
        return x & -x;
    }

  public:
    Fenwick(int length = 100000) : tree(length + 1), n(length)
    {
    }

    void add(int pos, T val)
    {
        for (; pos <= n; pos += lowbit(pos))
            tree[pos] += val;
    }

    T sum(int pos) const
    {
        T ans = 0;
        for (; pos > 0; pos -= lowbit(pos))
            ans += tree[pos];
        return ans;
    }#include <algorithm>
#include <cmath>
#include <cstring>
#include <iostream>
#include <map>
#include <queue>
#include <unordered_map>
#include <vector>

#define x first
#define y second
#define all(v) v.begin(), v.end()
#define endl '\n'

using namespace std;

using ll = long long;
using ull = unsigned long long;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using psi = pair<string, int>;


const int iINF = 0x3f3f3f3f;
const ll lINF = 0x3f3f3f3f3f3f3f3f;
const int mod = 998244353;
const ll MOD = 1000000007;

ll gcd(ll a, ll b)
{
    return b ? gcd(b, a % b) : a;
}

template <class T, class... Rest> void print(const T& x, const Rest &...rest);
}

    T query(int start, int end) const
    {
        return sum(end) - sum(start - 1);
    }
};

#endif // !IHXNAN_FENWICK
