#include <iostream>
#include <queue>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    priority_queue<long long int, vector<long long int>, greater<long long int>> a;
    int n, m, num = 0;
    long long int x, y, add, sum = 0;
    int i;
    
    cin >> n >> m;

    for (i = 0; i < n; i++) {
        cin >> num;
        a.push(num);
    }

    for (i = 0; i < m; i++) {
        x = a.top();
        a.pop();
        y = a.top();
        a.pop();
        
        add = x + y;
        a.push(add);
        a.push(add);
    }

    for (i = 0; i < n; i++) {
        sum += a.top();
        a.pop();
    }

    cout << sum;

    return 0;
}