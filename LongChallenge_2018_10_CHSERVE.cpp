// code_report Solution
// https://youtu.be/GMY0D60TPWE

int main() {
   int t; cin >> t;
   while (t--) {
      int a, b, k;
      cin >> a >> b >> k;
      cout << ((a + b) % (2 * k) < k ? "CHEF\n" : "COOK\n");
   }
   return 0;
}
