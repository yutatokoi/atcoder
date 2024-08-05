#include <bits/stdc++.h>
using namespace std;

int sum_of_digits(int n) {
  int total = 0;
  while (n > 0) {
    total += n % 10;
    n /= 10;
  }
  return total;
}

int main() {
  int N, A, B;
  cin >> N >> A >> B;
  
  int res = 0;
  
  for (int i = 1; i <= N; i++) {
    int total = sum_of_digits(i);
    
    if (A <= total && total <= B) {
      res += i;
    }
  }
  
  cout << res << endl;
  
  return 0;
}