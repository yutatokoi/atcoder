#include <bits/stdc++.h>
using namespace std;

int main() {
  int H, W;
  cin >> H >> W;
  
  int A[51][51];
  
  for (int i = 1; i <= H; i++) {
    for (int j = 1; j <= W; j++) {
      cin >> A[i][j];
    }
  }
  
  for (int i1 = 1; i1 <= H; i1++) {
    for (int i2 = i1 + 1; i2 <= H; i2++) {
      for (int j1 = 1; j1 <= W; j1++) {
        for (int j2 = j1 + 1; j2 <= W; j2++) {
          if ((A[i1][j1] + A[i2][j2]) > (A[i2][j1] + A[i1][j2])) {
            cout << "No" << endl;
            return 0;
          }
        }
      }
    }
  }
  
  cout << "Yes" << endl;
  
  return 0;
}