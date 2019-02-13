// code_report Solution
// Video Link: https://youtu.be/3iryF51qJKo
// Problem Link: https://www.codechef.com/FEB19B/problems/MAGICJAR

#include <iostream>
using namespace std;

int main() {
  int t; cin >> t;
  while (t--) {
    int n, x; cin >> n;
    auto ans = 0LL; 
    for (int i = 0; i < n; ++i) cin >> x, ans += x;
    cout << ans - n + 1 << endl;
  }
  return 0;
} 
