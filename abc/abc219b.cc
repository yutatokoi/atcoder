#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<string> S(3);
  string temp;
  
  for (int i = 0; i < 3; i++) {
    cin >> temp;
    S.at(i) = temp;
  }
  
  string T;
  cin >> T;
  
  for (const char t : T) {
    cout << S.at(t - '1');
  }
  
  cout << endl;
  
  return 0;
}