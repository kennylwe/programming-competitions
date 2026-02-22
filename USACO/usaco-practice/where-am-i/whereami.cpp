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
#include <climits>
#include <unordered_map>

using namespace std;

void setIO(string name = "") {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    if (name.size()) {
        freopen((name + ".in").c_str(), "r", stdin);
        freopen((name + ".out").c_str(), "w", stdout);
    }
}

int main() {
    setIO("whereami");
    int N;
    string str;
    cin >> N;
    cin >> str;
    int solution;

    for (int k = 1; k <= N; k++) {
        bool nowork = false;
        unordered_map<string, int> seen;
        for (int i = 0; i <= N - k; i++) {
            string sub = str.substr(i, k);
            if (seen[sub] > 0) {
                nowork = true;
            } else {
                seen[sub]++;
            }
        }
        if (nowork == false) {
            cout << k;
            break;
        }
    }

}