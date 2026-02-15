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
    setIO("astral");
    int T, N, A, B;
    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> N >> A >> B;
        int sum = 0;
        int grid[N][N];
        for (int j = 0; j < N; j++) {
            for (int k = 0; k < N; k++) {
                cin >> grid[j][k];
                if (grid[j][k] == 'W') {
                    grid[j][k] = 0;
                }
                else if (grid[j][k] == 'G') {
                    grid[j][k] = 1;
                }
                else {
                    grid[j][k] = 2;
                }
            }
        }
        for (int j = 0; j < N; j++) {
            for (int k = 0; k < N; k++) {
                if (grid[j][k] > 0) {
                    if (grid[j-A][k-B] > 0){
                        grid[j-A][k-B] -= 1;
                    }
                    else if (grid[j+A][k+B] > 0) {
                        grid[j+A][k+B] -= 1;
                    }
                    grid[j][k] -= 1;
                    sum++;
                }
            }
            cout << endl;
        }
        cout << sum << endl;

    }

}