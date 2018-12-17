// code_report Solution
// https://youtu.be/aWBkxc__VDY

#include <iostream>
using namespace std;

int main() {
   int n, r; cin >> n >> r;
   while (n--) {
      int x; cin >> x;
      cout << (x < r ? "Bad boi" : "Good boi") << endl;
   }
   return 0;
}
