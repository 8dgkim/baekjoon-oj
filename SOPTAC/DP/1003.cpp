#include <iostream>

using namespace std;

long long dp[42];
int zero, one;

long long fibonacci(int n)
{
    // if (dp[n] > 0) {
    //     return dp[n];
    // }
    if (n == 0) {
        zero++;
        return 0;
    }
    if (n == 1) {
        one++;
        return dp[n] = 1;
    } else {
        dp[n] = fibonacci(n - 2) + fibonacci(n - 1);
    }
    return dp[n];

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t, n;
    int i, j;

    cin >> t;

    for (i = 0; i < t; i++) {
        cin >> n;

        fibonacci(n);

        cout << zero << ' ' << one << '\n';
        
        zero = 0;
        one = 0;
    }
    
    return 0;
}