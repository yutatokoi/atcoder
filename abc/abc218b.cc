#include <bits/stdc++.h>
using namespace std;

int main() {
  int P;
  
  for (int i = 0; i < 26; i++) {
    cin >> P;
    cout << (char)('a' - 1 + P);
  }
  
  cout << endl;
  
  return 0;
}