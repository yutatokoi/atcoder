#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  map<int, int> A_i;
  set<int> As;
  
  for (int i = 1; i <= N; i++) {
    int A;
    cin >> A;
    
    A_i[A] = i;
    As.insert(A);
  }
  
  As.erase(*rbegin(As));
  cout << A_i[*rbegin(As)] << endl;
  
  return 0;
}