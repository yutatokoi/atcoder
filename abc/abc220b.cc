#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll f(string S, ll k) {
  ll ans = 0;
  int i = 0;
  reverse(S.begin(), S.end());
  for (const char s : S) {
    ans += ((s - '0') * pow(k, i));
    i++;
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