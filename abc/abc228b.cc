#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, X;
    cin >> N >> X;
    
    int A[100001];
    bool B[100001];
    
    for (int i = 1; i <= N; i++) {
      cin >> A[i];
    }
    
    int i = X;
    
    do {
      B[i] = true;
      i = A[i];
    } while (B[i] != true);
    
    int ans = 0;
    for (int i = 1; i <= N; i++) {
      if (B[i]) {
        ans++;
      }
    }
    
    cout << ans << endl;

   return 0;
}