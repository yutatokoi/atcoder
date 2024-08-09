#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll N;
  cin >> N;
  
  map<ll, int> count;
  set<ll> keys;
  
  for (int i = 1; i < N; i++) {
    ll a, b;
    cin >> a >> b;
    count[a] += 1;
    count[b] += 1;
    
    keys.insert(a);
    keys.insert(b);
  }
  
  for (int i = 0; i < N; i++) {
    ll key = *begin(keys);
    keys.erase(key);
    
    if (count[key] == N - 1) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  
  cout << "No" << endl;
  return 0;
}