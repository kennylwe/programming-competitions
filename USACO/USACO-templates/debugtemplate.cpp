// Headers {{{
#include <algorithm>
#include <cassert>
#include <cstring>
#include <iostream>
#include <iterator>
#include <map>
#include <math.h>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <tuple>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;

// Types
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef string str;

typedef pair<int, int> pi;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;

// Vectors
#define sz(x) int((x).size())
#define all(x) begin(x), end(x)
#define sortVec(x) sort(all(x))
#define pb push_back

// Loops
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define F0R(i, a) FOR(i, 0, a)
#define ROF(i, a, b) for (int i = (b)-1; i >= (a); --i)
#define R0F(i, a) ROF(i, 0, a)
#define foreach(a, x) for (auto &a : x)

void setIO(string name = "") {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    if (name.size()) {
        freopen((name + ".in").c_str(), "r", stdin);
        freopen((name + ".out").c_str(), "w", stdout);
    }
}

// Set
template <typename A> ostream &operator<<(ostream &os, const set<A> &m) {
    os << "{";
    string sep = "";
    for (auto e : m)
        os << sep << e, sep = ", ";
    return os << "}";
}
template <typename A>
ostream &operator<<(ostream &os, const unordered_set<A> &m) {
    os << "{";
    string sep = "";
    for (auto e : m)
        os << sep << e, sep = ", ";
    return os << "}";
}
template <typename A> ostream &operator<<(ostream &os, const multiset<A> &m) {
    os << "{";
    string sep = "";
    for (auto e : m)
        os << sep << e, sep = ", ";
    return os << "}";
}

// Map
template <typename A, typename B>
ostream &operator<<(ostream &os, const map<A, B> &m) {
    os << "{";
    string sep = "";
    for (auto e : m)
        os << sep << e.first << ": " << e.second, sep = ", ";
    return os << "}";
}
template <typename A, typename B>
ostream &operator<<(ostream &os, const unordered_map<A, B> &m) {
    os << "{";
    string sep = "";
    for (auto e : m)
        os << sep << e.first << ": " << e.second, sep = ", ";
    return os << "}";
}

// Vector
template <typename T> ostream &operator<<(ostream &os, const vector<T> &v) {
    os << "[";
    string sep = "";
    for (auto e : v)
        os << sep << e, sep = ", ";
    return os << "]";
}

// Array
template <typename T, size_t L>
ostream &operator<<(ostream &os, const array<T, L> &v) {
    os << "[";
    string sep = "";
    for (int i = 0; i < L; ++i)
        os << sep << v[i], sep = ", ";
    return os << "]";
}

// Pair
template <typename A, typename B>
ostream &operator<<(ostream &os, const pair<A, B> &p) {
    os << '(' << p.first << ", " << p.second << ')';
    return os;
}

// Tuple
// Source: https://stackoverflow.com/a/31116392/12128483
template <typename Type, unsigned N, unsigned Last> struct TuplePrinter {
    static void print(ostream &out, const Type &value) {
        out << get<N>(value) << ", ";
        TuplePrinter<Type, N + 1, Last>::print(out, value);
    }
};
template <typename Type, unsigned N> struct TuplePrinter<Type, N, N> {
    static void print(ostream &out, const Type &value) { out << get<N>(value); }
};
template <typename... Types>
ostream &operator<<(ostream &out, const tuple<Types...> &value) {
    out << '(';
    TuplePrinter<tuple<Types...>, 0, sizeof...(Types) - 1>::print(out, value);
    return out << ')';
}

void dbg() { cerr << endl; }
template <typename Head, typename... Tail> void dbg(Head H, Tail... T) {
    cerr << ' ' << H;
    dbg(T...);
}
// }}}

// Problem Statement {{{

// URL

// PROBLEM

// Example
// In:
// Out:

// }}}

int main() {

    setIO();

    int N;
    cin >> N;
    vector<int> x(N), y(N);
    for (int &t : x)
        cin >> t;
    for (int &t : y)
        cin >> t;
}