#include <bits/stdc++.h>
using namespace std;

int main() {
  int ans = 0;
  string S;
  cin >> S;
  
  for (int i = 0; i < 3; i++) {
    if (S[i] == '1') {
      ans++;
    }
  }
  
  cout << ans << endl;
  
  return 0;
}