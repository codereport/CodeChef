// code_report Solution
// Video Link: https://youtu.be/4vMpOE84PR8
// Problem Link: https://www.codechef.com/FEB19B/problems/DEPCHEF

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

#define FORI(s, n) for (int i = s; i < n; i++)
#define FORJ(s, n) for (int j = s; j < n; j++)

int main() {
  int t; cin >> t;
  while (t--) {
    // input
    int n; cin >> n;
    vector<int> a(n+2), d(n+2);
    FORI(0, n) cin >> a[i+1];
    FORI(0, n) cin >> d[i+1];
    a[0] = a[n], a[n+1] = a[1];
    // algorithm
    int ans = -1;
    FORI(1, n+1) {
      if (a[i-1] + a[i+1] < d[i]) 
        ans = max(ans, d[i]);
    }
    cout << ans << endl;
  }
  return 0;
} 
