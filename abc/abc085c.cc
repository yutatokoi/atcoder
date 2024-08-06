#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, Y;
  cin >> N >> Y;
  
  int eiichi = -1, umeko = -1, shibasaburo = -1;
  
  for (int a = 0; a <= N; a++) {
    for (int b = 0; (a + b) <= N; b++) {
      int c = N - a - b;
      int total = 10000 * a + 5000 * b + 1000 * c;
      
      if (total == Y && (a + b + c) == N) {
        eiichi = a;
        umeko = b;
        shibasaburo = c;
      }
    }
  }
  
  cout << eiichi << " " << umeko << " " << shibasaburo << endl;
  
  return 0;
}