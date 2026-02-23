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
#define ll long long

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
    ll T, a;
    //1. Loop through list
    //2. record each number, if it was seen before, then add k to it, add count
    //3. Repeat until each number is unique
    //Need to optimize it 


    cin >> T;
    for (int i = 0; i < T; i++) {
        ll N, K;
        ll count = 0;
        cin >> N >> K;
        vector<ll> nums;
        for (ll j = 0; j < N; j++) {
            cin >> a;
            nums.push_back(a);
        }
        if (K > 0) {
            sort(nums.begin(), nums.end());
        } else {
            sort(nums.begin(), nums.end(), greater<int>());
        }
        unordered_map<ll, ll> seen;
        for (ll j = 0; j < N; j++) {
            //add number to seen
            //check if number is already in seen
            // if (seen[nums[j]] > 0) {
            //     //M is a factor to add by
            //     ll M = 0;
            //     if (abs(nums[j-1] - nums[j]) % abs(K) == 0) {
            //         M = abs((nums[j-1] - nums[j]) / abs(K));
            //     }
            //     M++;
            //     if (M == 0) {
            //         M = 1;
            //     }
                
            //     nums[j] += K * M;
            //     count += 1 * M;
            // }
            while (seen[nums[j]] > 0) {
                nums[j] += K;
                count++;
            }
            seen[nums[j]] += 1;

        }
        cout << count << endl;
    }




}