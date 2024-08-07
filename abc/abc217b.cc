#include <bits/stdc++.h>
using namespace std;

int main() {
  string one, two, three;
  cin >> one >> two >> three;
  
  set<string> contests = {"ABC", "ARC", "AGC", "AHC"};
  
  contests.erase(one);
  contests.erase(two);
  contests.erase(three);
  
  cout << *begin(contests) << endl;
  
  return 0;
}