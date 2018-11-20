// code_report Solution
// https://youtu.be/Gp90sUHZ6Y0

#include <iostream>
#include <string>

using namespace std;

int main() {
   int t; cin >> t;
   while (t--) {
      string s; cin >> s;
      int i = -1, A  = 0, B = 0, nim = 0;

      auto add = [&](auto j) {
         if (s[i] == 'A') A += j - i - 1;
         if (s[i] == 'B') B += j - i - 1;
      };

      for (int j = 0; j < s.size(); ++j) {
         if (s[j] == '.') continue;
         if (i == -1) i = j;
         else {
            if (s[j] == s[i]) add(j);
            else nim ^= (j - i - 1);
            i = -1;
         }
      }
      if (i != -1) add(s.size());

      if (A == B) cout << (nim != 0 ? "A\n" : "B\n");
      else        cout << (A > B    ? "A\n" : "B\n");
   }
   return 0;
}
