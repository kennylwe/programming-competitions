
/*
ID: kenjlee1
LANG: PYTHON3
PROG: ride
*/

#include <iostream>
#include <string>
#include <fstream>

using namespace std;
int main() {
   string line;
   ifstream ride ("ride.txt");
   if (ride.is_open()) {
      while (getline (ride, line) ) cout << line << "\n";
   }
   ride.close();


}

