// code_report Solution
// Video Link: https://youtu.be/LKavkG1MBRE
// Problem Link: https://www.codechef.com/FEB19B/problems/HMAPPY2

#include <iostream>

template<class T>
T lcm(T a, T b) {  
    return (a*b)/__gcd(a, b);  
}  

int main() {
  int t; cin >> t;
  while (t--) {
    long long n, a, b, k, x, y, z;
    cin >> n >> a >> b >> k;
    x = n / a;
    y = n / b;
    z = n / lcm(a, b);
    cout << (x + y - 2 * z >= k ? "Win\n" : "Lose\n");
  }
  return 0;
} 
