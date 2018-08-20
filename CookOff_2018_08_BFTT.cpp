// code_report Solution
// https://youtu.be/Enbht_Uf1CE

#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main () {
   int t; cin >> t;
   while (t--) {
      int n; cin >> n;
      while (true) {
         n++;
         auto s = to_string (n);
         auto c = count (s.begin (), s.end (), '3');
         if (c < 3) continue;
         cout << s << endl;
         break;
      }
   }

   return 0;
}  
