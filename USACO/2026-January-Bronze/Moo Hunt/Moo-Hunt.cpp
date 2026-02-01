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


int main() {
    setIO("Hunt");
    int N;
    int K;
    cin >> N >> K;

    int x, y, z;
    int board[N];

    int xs[N];
    int ys[N];
    int zs[N];

    for (int i = 0; i < K; i++) {
        cin >> x >> y >> z;
        
        xs[x-1] += 1;
        ys[y-1] += 1;
        zs[z-1] += 1;



    }
    for (int i = 0; i < N; i++) {
        

    }
    
}
