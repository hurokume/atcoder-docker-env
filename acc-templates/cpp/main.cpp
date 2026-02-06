#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

/* Boost Format
#include <boost/format.hpp>
using boost::format;
//*/
/* Boost Multiprecision
#include <boost/multiprecision/cpp_int.hpp>
using boost::multiprecision::cpp_int;
//*/

// cin cout の結びつけ解除, stdioと同期しない(入出力非同期化)
// cとstdの入出力を混在させるとバグるので注意
struct Fast
{
    Fast()
    {
        std::cin.tie(0);
        ios::sync_with_stdio(false);
    }
} fast;

/* typedef */
using ui = unsigned int;
using ll = long long;
using ull = unsigned long long;
using vi = vector<int>;
using vvi = vector<vi>;
using vvvi = vector<vvi>;
using vll = vector<ll>;
using vvll = vector<vll>;
using vvvll = vector<vvll>;
using vb = vector<bool>;
using vvb = vector<vb>;
using vs = vector<string>;
using pii = pair<int, int>;
using pcc = pair<char, char>;
using pic = pair<int, char>;
using pci = pair<char, int>;

/* Constant */
constexpr ll inf = 1'010'000'000'000'000'017LL;
constexpr ll mod = 1'000'000'007LL;
constexpr double eps = 1e-12;
constexpr double pi = 3.14159265358979323846;

/* short hand */
#define pb push_back
#define mp make_pair
#define fst first
#define sec second

/* loop */
#define reps(i, a, b) for (ll i = (a), i##_len = (b); i < i##_len; ++i)
#define rep(i, n) reps(i, 0, (n))
#define rep1(i, n) reps(i, 1, (n) + 1)
#define deps(i, a, b) for (ll i = (a), i##_len = (b); i > i##_len; --i)
#define dep(i, n) deps(i, (n) - 1, -1)
#define dep1(i, n) deps(i, (n), 0)
#define each(i, n) for (auto &&i : (n))

/* macro func */
#define all(a) (a).begin(), (a).end()
#define lla(a) (a).rbegin(), (a).rend()
#define sz(x) ((ll)(x).size())
#define uq(v) (v).erase(unique(ALL(v)), (v).end())

/* func */
template <typename T>
inline void print(const vector<T> &v, string s = " ")
{
    const ll sz = v.size();
    rep(i, sz)
            cout
        << v[i] << (i != sz - 1 ? s : "\n");
}
template <typename T, typename S>
inline void print(const pair<T, S> &p) { cout << p.fst << ' ' << p.sec << endl; }
template <typename T>
inline void print(const T &x) { cout << x << '\n'; }
template <typename T, typename S>
inline void print(const vector<pair<T, S>> &v)
{
    each(p, v)
        print(p);
}
template <typename T, typename S>
inline void print(const map<T, S> &m)
{
    each(p, m)
        print(p);
}
template <typename T>
inline void yn(const T &ans)
{
    if (ans)
    {
        print("Yes");
    }
    else
    {
        print("No");
    }
}
template <typename T>
inline bool chmin(T &a, const T &b)
{
    bool cmp = a > b;
    if (a > b)
        a = b;
    return cmp;
}
template <typename T>
inline bool chmax(T &a, const T &b)
{
    bool cmp = a < b;
    if (a < b)
        a = b;
    return cmp;
}

int main()
{
    ll n;
    cin >> n;
}
