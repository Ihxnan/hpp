#ifndef IHXNAN_DEBUG
#define IHXNAN_DEBUG

#include <algorithm>
#include <cmath>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <vector>

#define all(x) x.begin(), x.end()
#define out(x) cout << (x) << endl
#define out1(x) cout << #x << " = " << (x) << endl
#define out2(x, y) cout << #x << " = " << (x) << ", " << #y << " = " << (y) << endl
#define out3(x, y, z) cout << #x << " = " << (x) << ", " << #y << " = " << (y) << ", " << #z << " = " << (z) << endl
#define lowbit(x) ((x) & -(x))
#define yn(ans) printf("%s\n", (ans) ? "Yes" : "No")
#define YN(ans) printf("%s\n", (ans) ? "YES" : "NO")
#define pb push_back
#define qb pop_back
#define pf push_front
#define qf pop_front
#define no do { cout << "No" << endl; return; } while(0)
#define yes do { cout << "Yes" << endl; return; } while (0)
#define endl '\n'

using namespace std;
using ll = long long;
using ull = unsigned long long;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using vs = vector<string>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using psi = pair<string, int>;

const int iINF = 0x3f3f3f3f;
const ll lINF = 0x3f3f3f3f3f3f3f3f;
const int mod = 998244353;
const ll MOD = 1000000007;

template <typename T> ostream &operator<<(ostream &out, const set<T> &obj)
{
    out << "set(";
    for (auto it = obj.begin(); it != obj.end(); it++)
        out << (it == obj.begin() ? "" : ", ") << *it;
    out << ")";
    return out;
}
template <typename T1, typename T2> ostream &operator<<(ostream &out, const map<T1, T2> &obj)
{
    out << "map(";
    for (auto it = obj.begin(); it != obj.end(); it++)
        out << (it == obj.begin() ? "" : ", ") << it->first << ": " << it->second;
    out << ")";
    return out;
}
template <typename T1, typename T2> ostream &operator<<(ostream &out, const pair<T1, T2> &obj)
{
    out << "<" << obj.first << ", " << obj.second << ">";
    return out;
}
template <typename T> ostream &operator<<(ostream &out, const vector<T> &obj)
{
    out << "vector(";
    for (auto it = obj.begin(); it != obj.end(); it++)
        out << (it == obj.begin() ? "" : ", ") << *it;
    out << ")";
    return out;
}
ll gcd(ll a, ll b)
{
    return b ? gcd(b, a % b) : a;
}

#endif // !IHXNAN_DEBUG
