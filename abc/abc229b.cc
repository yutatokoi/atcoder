#include <bits/stdc++.h>
using namespace std;

int main() {
  string A, B;
  cin >> A >> B;
  
  int length = min(A.size(), B.size());
  reverse(A.begin(), A.end());
  reverse(B.begin(), B.end());
  
  for (int i = 0; i < length; i++) {
    int A_digit = A[i] - '0', B_digit = B[i] - '0';
    int sum = A_digit + B_digit;
    if (10 <= sum) {
      cout << "Hard" << endl;
      return 0;
    }
  }
  
  cout << "Easy" << endl;
  return 0;
}