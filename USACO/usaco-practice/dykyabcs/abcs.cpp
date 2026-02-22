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
    setIO();
    int nums[] = {};
    vector<int> v;
    int n;
    int a;
    int b;
    int c;
    int sum;
    for (int i = 0; i < 7; i++) {
        cin >> n;
        v.push_back(n);
    }
    int min = INT_MAX;
    int count;
    a = *min_element(v.begin(), v.end());
    for (int i = 0; i < 7; i++) {
        if (v[i] < min && v[i] != a) {
            min = v[i];
        }
        if (v[i] == a) {
            count++;
        }
    }
    if (count > 1) {
        b = a;
    } else {
        b = min;
    }
    sum = *max_element(v.begin(), v.end());
    c = sum - a - b;

    cout << a << " " << b << " " << c << endl;


}