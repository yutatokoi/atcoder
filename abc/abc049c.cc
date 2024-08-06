#include <bits/stdc++.h>
using namespace std;

string divide[4] = {"dream", "dreamer", "erase", "eraser"};

int main() {
  string S;
  cin >> S;
  
  reverse(S.begin(), S.end());
  for (int i = 0; i < 4; i++) {
    reverse(divide[i].begin(), divide[i].end());
  }
  
  bool divisible1 = true;
  for (int i = 0; i < S.size(); ) {
    bool divisible2 = false;
    
    for (int j = 0; j < 4; j++) {
      string d = divide[j];
      
      if (S.substr(i, d.size()) == d) {
        divisible2 = true;
        i += d.size();
      }
    } 
    
    if (!divisible2) {
      divisible1 = false;
      break;
    }
  }
  
  if (divisible1) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
  
  return 0;
}