#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    vector<char> S(N);
    
    for (int i = 0; i < N; ++i) {
        cin >> A[i] >> S[i];
    }
    
    vector<vector<vector<int>>> dp(N + 1, vector<vector<int>>(101, vector<int>(101, INF)));
    
    for (int l = 1; l <= 100; ++l) {
        for (int r = 1; r <= 100; ++r) {
            dp[0][l][r] = 0;
        }
    }
    
    for (int i = 0; i < N; ++i) {
        for (int l = 1; l <= 100; ++l) {
            for (int r = 1; r <= 100; ++r) {
                if (dp[i][l][r] == INF) continue;
                
                if (S[i] == 'L') {
                    dp[i + 1][A[i]][r] = min(dp[i + 1][A[i]][r], dp[i][l][r] + abs(A[i] - l));
                } else {
                    dp[i + 1][l][A[i]] = min(dp[i + 1][l][A[i]], dp[i][l][r] + abs(A[i] - r));
                }
            }
        }
    }
    
    int result = INF;
    for (int l = 1; l <= 100; ++l) {
        for (int r = 1; r <= 100; ++r) {
            result = min(result, dp[N][l][r]);
        }
    }
    
    cout << result << endl;
    
    return 0;
}