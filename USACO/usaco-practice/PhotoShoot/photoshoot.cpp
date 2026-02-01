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

#define ll as longlong

void setIO(string name = "") {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    if (name.size()) {
        freopen((name + ".in").c_str(), "r", stdin);
        freopen((name + ".out").c_str(), "w", stdout);
    }
}

int printgrid(int grid[][500], int N) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cerr << grid[i][j] << " ";
        }
        cerr << endl;
    }
    return 1;
}

//Easier
//Every time step, check all poss windows
//get best score from those and print

//harder
//get every window that contains the new cow
// 


int main() {
    setIO("photo");
    int N, K, Q;
    int r, c, v;
    cin >> N >> K >> Q;
    int sum;

    int grid[500][500];
    for (int i = 0; i < Q; i++) {
        cin >> r >> c >> v;
        r--, c--;
        grid[r][c] = v;
        
        
        
    }
    printgrid(grid, N);





}


