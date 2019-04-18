// code_report Solution
// Video Link: https://youtu.be/JT3AYsVtYKM
// Problem Link: https://www.codechef.com/APRIL19B/problems/MAXREM/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

auto solve(vector<int> v) -> int {
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());
    return v.size() == 1 ? 0 : v[v.size() - 2];
}

int main() {
    int n; cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) cin >> v[i];
    cout << solve(v) << endl;
    return 0;
}
