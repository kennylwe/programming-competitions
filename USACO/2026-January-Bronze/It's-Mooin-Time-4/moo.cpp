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
    setIO("Moo");
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


        cout << "YES" << endl;
        //I give up T_T

        cin >> N >> S;
        count = 0;
        if (k == 0) {
            if (isPossible(S)) {cout << "YES" << endl;}
            else {cout << "NO" << endl;}
        }
        else {

            if (S[S.length() - 1] == 'O') {
                solution = solution + "M";
            }
            else {
                solution = solution + "M";
            }
            
        }


    }


}