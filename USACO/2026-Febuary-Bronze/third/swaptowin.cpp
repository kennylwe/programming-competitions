#include <iostream>
//#include <stdio>
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
    setIO();
    /*
    1. You have a list of strings
    2. You have two options to manipulate the list
        1. Swap two characters of any pos in one string
        2. Swap two characters of the same pos
    3. You dont need to optimize swapping to make it in the lowest amount of swaps!
    4. You can only swap less than 2M times
    5. Print end result


    solution:
    1. 2M swaps - each position (M) gets 2 swaps max
    2. go through s1, if s1[x] == t[x] then skip
    3. if s1[x] != t[x] check if s1[x] appears anywhere later in the string
    4. if s1[x] doesnt appear later check other strings for where it appears
    5. Switch positions in other strings then push to s1
    */
    int T, N, M;
    string t;
    int x, p, q;
    cin >> T;
    for (int n = 0; n < T; n++) {
        cin >> N >> M;
        cin >> t;
        vector<string> s(N);
        for (int i = 0; i < N; i++) cin >> s[i];

        vector<string> ops;

        for (int j = 0; j < M; j++) {
            if (s[0][j] == t[j]) continue;

            bool found = false;

            for (int k = j + 1; k < M && !found; k++) {
                if (s[0][k] == t[j]) {
                    ops.push_back("1 1 " + to_string(j+1) + " " + to_string(k+1));
                    swap(s[0][j], s[0][k]);
                    found = true;
                }
            }

            for (int x = 1; x < N && !found; x++) {
                for (int k = 0; k < M && !found; k++) {
                    if (s[x][k] == t[j]) {
                        if (k != j) {
                            ops.push_back("1 " + to_string(x+1) + " " + to_string(k+1) + " " + to_string(j+1));
                            swap(s[x][k], s[x][j]);
                        }
                        ops.push_back("2 1 " + to_string(x+1) + " " + to_string(j+1));
                        swap(s[0][j], s[x][j]);
                        found = true;
                    }
                }
            }
        }

        cout << ops.size() << "\n";
        for (auto& op : ops) {
            cout << op << endl;
        }
    }
}