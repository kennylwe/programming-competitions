/*
ID: kenjlee1
LANG: C++
PROG: ride
*/


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

void setIO(string name = "") {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    if (name.size()) {
        freopen((name + ".in").c_str(), "r", stdin);
        freopen((name + ".out").c_str(), "w", stdout);
    }
}

int calcscore(string group) {
    int prod = 1;

    for (char c : group) {
        prod *= (c - 'A' + 1);
    }

    return prod;


}

int main() {
    setIO("ride");
    string group;
    string comet;
    cin >> group >> comet;

    cerr << group << endl;
    cerr << comet << endl;


    if (calcscore(group) % 47 == calcscore(comet) % 47) {
        cout << "GO" << endl;
    }
    else {
        cout << "STAY" << endl;
    }
    
    
    // int N;
    // cin >> N;
    // int y;
    // cin >> y;
    // cout << N + y << endl;



    return 0;
}
    
