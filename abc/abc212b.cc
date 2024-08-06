#include <bits/stdc++.h>
using namespace std;

int main() {
  map<int, int> next;
  for (int i = 0; i < 9; i++) {
    next[i] = i + 1;
  }
  next[9] = 0;
  
  int pass, one, two, three, four;
  cin >> pass;
  
  one = pass / 1000;
  pass -= 1000 * one;
  two = pass / 100;
  pass -= 100 * two;
  three = pass / 10;
  pass -= 10 * three;
  four = pass;
  
  if ((one == two) && (two == three) && (three == four)) {
    cout << "Weak" << endl;
    return 0;
  }
  
  if ((next[one] == two) && (next[two] == three) && (next[three] == four)) {
    cout << "Weak" << endl;
    return 0;
  }
  
  cout << "Strong" << endl;
  return 0;
}