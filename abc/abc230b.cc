#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  
  string T = "oxxoxxoxxoxxoxxoxxoxxoxxoxxoxxoxxoxxoxxoxxoxxoxxoxxoxxoxxoxx";
  
  for (int i = 0; i < 60; i++) {
    for (int j = 0; j < 60 - i; j++) {
      if (T.substr(i, j) == S) {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }
  
  cout << "No" << endl; 
  return 0;
}