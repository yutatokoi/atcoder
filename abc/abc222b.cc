#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, P, ans = 0;
  cin >> N >> P; 
  
  for (int i = 0; i < N; i++) {
    int a;
    cin >> a;
    
    if (a < P) ans++;
  }
  
  cout << ans << endl;
  return 0;
}