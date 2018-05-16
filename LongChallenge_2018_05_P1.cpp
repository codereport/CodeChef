// code_report Solution
// https://youtu.be/6o3XSOKU0oc

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int gcd (int a, int b) {
   return b == 0 ? a : gcd (b, a % b);
}

int minimum_deletions (const vector<int>& v)
{
   int gcd_so_far = v[0];
   for (int i = 1; i < v.size (); i++)
   {
      gcd_so_far = gcd (gcd_so_far, v[i]);
      if (gcd_so_far == 1) return 0;
   }

   return -1;
}

int main ()
{
   int t; cin >> t;
   while (t--)
   {
      int n; cin >> n;
      vector<int> v (n);
      for (int i = 0; i < n; i++) cin >> v[i];
           
      cout << minimum_deletions (v) << endl;
   }
   return 0;
}
