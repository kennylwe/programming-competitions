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
        char c;
        int grid[N][N];
        bool isimpossible = false;
        for (int j = 0; j < N; j++) {
            for (int k = 0; k < N; k++) {
                cin >> c;
                if (c == 'W') {
                    grid[j][k] = 0;
                }
                else if (c == 'G') {
                    grid[j][k] = 1;
                }
                else {
                    grid[j][k] = 2;
                }
            }


        }

        for (int j = 0; j < N; j++) {
            for (int k = 0; k < N; k++) {
                if (grid[j][k] == 2) {
                    if (j-A < 0 || k-B < 0 || j+A >= N || k+B >= N) {
                        isimpossible = true;
                    }
                    else if (grid[j-A][k-B] == 0) {
                        isimpossible = true;
                    }
                    else {
                        grid[j-A][k-B] -= 1;
                        sum++;
                    }
                }
            }
        }

        for (int j = 0; j < N; j++) {
            for (int k = 0; k < N; k++) {
                if (grid[j][k] == 1) {
                    if (grid[j+A][k+B] == 1) {
                        grid[j+A][k+B] -= 1;
                    }
                    if (grid[j-A][k-B] == 1) {
                        grid[j-A][k-B] -= 1;
                    }
                    grid[j][k] -= 1;
                    sum++;
                }
            }
        }
        
    }

        // TODO: Check Black Cases

        // For all black nodes:
        //    

        // TODO: Check Gray Cases


        for (int j = 0; j < N; j++) {
            for (int k = 0; k < N; k++) {
                    
                }
            }
            cout << endl;
            if (isimpossible) {
                cout << -1 << endl;
            }
            else {
                cout << sum << endl;
            }
        }









    /*
    
                if (grid[j][k] > 0) {
                    bool isblack = false;
                    if (grid[j][k] == 2){
                        isblack = true;
                    }

                    if (grid[j-A][k-B] > 0 && j-A >= 0 && k-B >= 0) {
                        grid[j-A][k-B] -= 1;
                    }
                    else if (grid[j+A][k+B] > 0 && j+A < N && k+B < N) {
                        grid[j+A][k+B] -= 1;
                    }
                    else {
                        if (isblack) {
                            cerr << "i" << i << "j" << j << endl;
                            // TODO: Print out whole grid
                            cerr << grid[j][k] << endl;
                            isimpossible = true;
                            for (int x = 0; x < N; x++) {
                                for (int y = 0; y < N; y++) {
                                    cerr << grid[x][y] << " ";
                                }
                                cerr << endl;
                            }
                        }
                    }
                    isblack = false;
                    grid[j][k] -= 1;
                    sum++;

                    }
    */

