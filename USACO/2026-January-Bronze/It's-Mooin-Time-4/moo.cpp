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

bool isPossible(string S) {
    if (S[0] == 'O' && S[1] == 'M') {
        return false;
    }
    return true;
}

int numofchanges(string S) {
    int sum = 0;
    for (int i = 0; i < S.length(); i++) {
        if (S[i] == 'O') {
            sum++;
        }
    }
    return sum;
}

int main() {
    setIO();
    int T;
    int k;

    int N;
    string S;
    int count;
    bool start = false;
    string solution = "";

    cin >> T >> k;
    //OOMOO - need to track the amount of changes in 
    //if the last char is O, then reverse every char before it
    //if the last car is M, then it stays the same
    //starting the beginning, if the first char is M, then 
    //if two sets of OO:
    //the second O must stay the same;
    //The first O changed to M
    //If two sets of MM:
    //

    //impossible: if you get a change of OMO;




    for (int i = 0; i < T; i++) {


        cin >> N >> S;
        int flipcounter = 0;
        solution = "";
        if (k == 0) {
            cout << "YES" << endl;
        }
        else {
            for (int j = N - 1; j >= 0; j--) {
                if (S[j] == 'O' && flipcounter % 2 == 0) {
                    solution += 'O';
                    flipcounter++;
                }
                else if (S[j] == 'M' && flipcounter % 2 == 0) {
                    solution += 'M';
                }
                else if (S[j] == 'O' && flipcounter % 2 == 1) {
                    solution += 'M';
                }
                else if (S[j] == 'M' && flipcounter % 2 == 1) {
                    solution += 'O';
                    flipcounter++;
                }
            }
            reverse(solution.begin(), solution.end());
            cout << "YES" << endl;
            cout << solution << endl;

        }


    }


}