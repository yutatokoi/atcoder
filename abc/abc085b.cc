#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  set<int> S;
  int d;
  
  for (int i = 0; i < N; i++) {
    cin >> d;
    S.insert(d);
  }
  
  cout << S.size() << endl;
  
  return 0;
}