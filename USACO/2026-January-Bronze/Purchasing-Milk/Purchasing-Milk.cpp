#include <iostream>
// #include <stdio>
#include <algorithm>
#include <cassert>
#include <cstring>
#include <iterator>
#include <map>
#include <math.h>
#include <numeric>
#include <queue>
#include <set>
#include <string>
#include <tuple>
#include <vector>

using namespace std;

#define ll long long;

void setIO(string name = "") {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    if (name.size()) {
        freopen((name + ".in").c_str(), "r", stdin);
        freopen((name + ".out").c_str(), "w", stdout);
    }
}

int main() {
    setIO("milk");
    ll N;
    ll Q;
    ll a;
    ll x;
    ll price;

    cin >> N >> Q;

    ll prices[N];

    for (int i = 0; i < N; i++) {
        cin >> a;
        prices[i] = a;
    }

    for (int i = 0; i < Q; i++) {
        cin >> x;
        price = 0;
        for (ll j = ll(log2(x)); j > 0; j--) {
            while (x - pow(2, j) >= 0) {
                x -= (pow(2, j));
                price += prices[j];
            }
        }
        if (ll(log2(x) == 0)) {
            price += prices[0];
        }
        cout << price << endl;

    }

    return 0;



    

}