#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  
  string last_names[N];
  string first_names[N];
  
  for (int i = 0; i < N; i++) {
    cin >> last_names[i] >> first_names[i];
  }
  
  for (int i = 0; i < N; i++) {
    for (int j = i + 1; j < N; j++) {
      if ((last_names[i] == last_names[j]) && (first_names[i] == first_names[j])) {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }
  
  cout << "No" << endl;
  
  return 0;
}