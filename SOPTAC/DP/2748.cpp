#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long dp[92];
    int n;
    int i;

    dp[0] = 0;
    dp[1] = 1;

    cin >> n;

    for (i = 2; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    cout << dp[n];
    
    return 0;
}