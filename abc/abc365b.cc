#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  
  vector<int> nums_arr(N);
  set<int> nums_set;
  
  
  for (int i = 0; i < N; i++) {
    int A;
    cin >> A;
    
    nums_arr.at(i) = A;
    nums_set.insert(A);
  }
  
  int biggest = *rbegin(nums_set);
  nums_set.erase(biggest);
  biggest = *rbegin(nums_set);
  
  int biggest_index;
  
  for (int i = 0; i < N; i++) {
    if (nums_arr.at(i) == biggest) {
      biggest_index = i + 1;
      break;
    }
  }
  
  cout << biggest_index << endl;
}