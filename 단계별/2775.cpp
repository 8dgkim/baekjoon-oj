#include <iostream>
#include <iomanip>

using namespace std;

long long factorial(long long n)
{
    int i = 1;
    long long f = 1;

    for (i = 1; i <= n; i++) {
        f *= i;
    }
    
    return f;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t = 0;
    long long k = 0, n = 0;
    double num = 1;
    double people = 0;
    int i, j;

    cin >> t;

    for (i = 0; i < t; i++) {
        cin >> k >> n;

        for (j = 0; j <= k; j++) {
            num *= n + j;
        }
        people = num / factorial(k + 1);
        
        cout << fixed << setprecision(0) << people << '\n';
        
        num = 1;
        people = 0;
    }

    return 0;
}
