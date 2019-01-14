// code_report Solution
// Video link: https://youtu.be/xZKd3lkYLdE
// Problem Link: https://www.codechef.com/JAN19A/problems/FANCY

#include <iostream>
#include <string>

using namespace std;

auto is_fancy(const string& s) {
   auto n = s.size();
   return s == "not" ||
            (n >= 4 && (s.substr(0, 4)     == "not " ||
                        s.substr(n - 4, 4) == " not" ||
                        s.find(" not ") != string::npos));
}

int main() {
   int t; cin >> t;
   string s; getline(cin, s);
   while (t--) {
      string s; getline(cin, s);
      cout << (is_fancy(s) ? "Real Fancy\n" : "regularly fancy\n");
   }
   return 0;
}
