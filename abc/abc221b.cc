#include <bits/stdc++.h>
using namespace std;

int main() {
  string ans = "No";
  string S, T;
  cin >> S >> T;
  
  if (S == T) ans = "Yes";
  
  for (unsigned long i = 0; i < S.size(); i++) {
    if (S[i] != T[i]) {
      if (0 < i) {
        swap(S[i], S[i - 1]);
        if (S == T) ans = "Yes";
        swap(S[i], S[i - 1]);
      }
      if (i + 1 < S.size()) {
        swap(S[i], S[i + 1]);
        if (S == T) ans = "Yes";
        swap(S[i], S[i + 1]);
      }
    break;
    }
  }
  
  cout << ans << endl;
  return 0;
}