// code_report Solution
// Video Link: 
// Problem Link: https://www.codechef.com/APRIL19B/problems/STRCH/

#include <iostream>
#include <string>

using namespace std;
using ll = long long;

auto sumN(ll n) -> ll {
    return (n * (n + 1)) / 2;
}

auto solve(int n, string const& s, char c) -> ll {
    ll t = 0, missing = 0;
    for (auto e : s) {
        if (e == c) missing += sumN(t), t = 0;
        else ++t;
    }
    missing += sumN(t);
    return sumN(n) - missing;
}

int main() {
    int t; cin >> t;
    while (t--) {
        int n; string s; char c;
        cin >> n >> s >> c;
        cout << solve(n, s, c) << endl;
    }
    return 0;
}
