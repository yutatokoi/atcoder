#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  
  int t[N + 1], x[N + 1], y[N + 1];
  t[0] = x[0] = y[0] = 0;
  
  for (int i = 1; i <= N; i++) {
    cin >> t[i] >> x[i] >> y[i];
  }
  
  bool possible = true;
  for (int i = 0; i < N; i++) {
    int dt = t[i + 1] - t[i];
    int dist = abs(x[i] - x[i + 1]) + abs(y[i] - y[i + 1]);
    
    if (dt < dist) {
      possible = false;
    }
    
    if (dt % 2 != dist % 2) {
      possible = false;
    }
  }
  
  if (possible) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  
  return 0;
}