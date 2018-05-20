// code_report Solution
// https://youtu.be/y03Oe5RRVeQ

#include <iostream>

using namespace std;

 void secret_recipe (float x1, float x2, float x3, float v1, float v2)
 {
    float t1 = (x3 - x1) / v1, t2 = (x2 - x3) / v2;

    if (t1 < t2)      cout << "Chef" << endl;
    else if (t1 > t2) cout << "Kefa" << endl;
    else              cout << "Draw" << endl;
 }

int main ()
{
   int t; cin >> t;
   while (t--)
   {
      float x1, x2, x3, v1, v2;
      cin >> x1 >> x2 >> x3 >> v1 >> v2;
      secret_recipe (x1, x2, x3, v1, v2);
   }

   return 0;
}
