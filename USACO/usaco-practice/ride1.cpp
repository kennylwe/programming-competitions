
/*
ID: kenjlee1
LANG: C++
PROG: ride
*/

#include <iostream>
#include <string>
#include <fstream>
#include <list>

using namespace std;
int main() {
   string line;
   list<string> list;
   ifstream ride ("ride.txt");
   int sum1 = 1;
   int sum2 = 1;
   if (ride.is_open()) {
      while (getline (ride, line)) list.push_back(line);
   }


   ride.close();

   for (char c : list.front()) {
      sum1 *= c - 66;
   }
   for (char c : list.back()) {
      sum2 *= c - 66;
   }
   std::ofstream myfile ("output.out");
   
   if (sum1 % 47 == sum2 % 47) {
      myfile << "GO";
   }
   else {
      myfile << "STAY";
   }
   myfile.close();




}

