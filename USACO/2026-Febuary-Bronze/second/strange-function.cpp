#include <iostream>
// #include <stdio>
#include <algorithm>
#include <cassert>
#include <cstring>
#include <cmath>
#include <iterator>
#include <map>
#include <math.h>
#include <numeric>
#include <queue>
#include <set>
#include <string>
#include <tuple>
#include <vector>
#include <climits>
#include <unordered_map>


using namespace std;



#define ll long long


void setIO(string name = "") {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    if (name.size()) {
        freopen((name + ".in").c_str(), "r", stdin);
        freopen((name + ".out").c_str(), "w", stdout);
    }
}





int main() {
    setIO();
    int T;
    cin >> T;

    const ll MOD = 1e9 + 7;
    for (int i = 0; i < T; i++) {
        string x;

        cin >> x;
        int n = x.size();
        bool binary = true;

        for (char c : x) {
            int d = c - '0';
            if (d != 0 && d != 1) {
                binary = false;
                break;
            }
        }

        string s(n, '0');
        for (int j = 0; j < n; j++) {
            if ((x[j] - '0') % 2 == 1) {  
                s[j] = '1'; 
            }
            else {
                s[j] = '0';  
            }
        }

        ll total = 0;
        ll pow2 = 1; 

        for (int i = 0; i < n; i++) {
            char c = s[n - 1 - i]; 
            if (c == '1') {
                if (i == 0) {
                    total = (total + 1) % MOD;
                }
                else {
                    total = (total + 3LL * pow2) % MOD;
                }
            }
            if (i == 0) {
                pow2 = 1;
            }
            else {
                pow2 = pow2 * 2 % MOD;
            }
        }

        ll ans = (total + (binary ? 0 : 1)) % MOD;

        
        cout << ans << endl;
    }
}