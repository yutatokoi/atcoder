#include <bits/stdc++.h>
using namespace std;

int main() {
  int Q;
  cin >> Q;
  
  map<int, int> ball_count;
  
  set<int> elements;
  
  for (int i = 0; i < Q; i++) {
    int query, x;
    cin >> query;
    
    if (query == 3) {
      cout << elements.size() << endl;
    } else {
      cin >> x;
      if (query == 1) {
        ball_count[x] += 1;
        elements.insert(x);
      } else {
        ball_count[x] -= 1;
        if (ball_count[x] == 0) elements.erase(x);
      }
    }
  }
  
  return 0;
}