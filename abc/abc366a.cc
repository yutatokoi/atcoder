#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, T, A;
  cin >> N >> T >> A;
  
  int remaining = N - T - A;
  
  int smaller, bigger;
  if (T < A) {
    smaller = T;
    bigger = A;
  } else {
    smaller = A;
    bigger = T;
  }
  
  string ans;
  
  if (smaller + remaining > bigger) {
    ans = "No";
  } else {
    ans = "Yes";
  }
  
  cout << ans << endl;

  return 0;
}