// code_report Solution
// https://youtu.be/CvJz_RgTYgU

#include <iostream>

using namespace std;

int main ()
{
   int n; cin >> n;

   while (n--) 
   {
      int x; cin >> x;
      cout << (x % 5 == 0 ? (x % 2 == 0 ? 0 : 1) : -1) << endl;
   }

   return 0;
}
