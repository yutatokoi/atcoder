#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  int ans = 0;
  
  for (int i = 0; i < N; i++) {
    int S;
    cin >> S;
    int valid = 0;
    
    for (int a = 1; a < 1000; a++) {
      for (int b = 1; b < 1000; b++) {
        int area = 4 * a * b + 3 * a + 3 * b;
        
        if (area == S) valid = 1;
      }
    }
    
    if (valid == 0) ans++;
  }
  
  cout << ans << endl;
  
  return 0;
}