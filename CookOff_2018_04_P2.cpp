// code_reoport Solution
// https://youtu.be/w6l_tDniL34

#include <vector>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string binary_nim (const vector<string>& stacks, const string& first) 
{
   int a = 0, b = 0;
   for (const auto& stack : stacks) 
   {
      if (stack[0] == '0') a += count (stack.begin (), stack.end (), '0');
      if (stack[0] == '1') b += count (stack.begin (), stack.end (), '1');
   }

   if (a == b) return (first == "Dee" ? "Dum" : "Dee");
   else        return (a > b          ? "Dee" : "Dum");
}

int main ()
{
   int t; cin >> t;

   while (t--) 
   {
      int n; string s; 
      cin >> n >> s;
      vector<string> v (n);
      for (int i = 0; i < n; i++) cin >> v[i];

      cout << binary_nim (v, s) << endl;
   }

   return 0;
}
