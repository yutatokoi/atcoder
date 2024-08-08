#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll f(string S, ll k) {
  ll ans = 0;
  for (const char s : S) {
    ans *= k;
    ans += s - '0';
  }
  return ans;
}

int main() {
  ll K;
  string A, B;
  cin >> K >> A >> B;
  
  ll X = f(A, K);
  ll Y = f(B, K);
  
  cout << X * Y << endl;
  
  return 0;
}