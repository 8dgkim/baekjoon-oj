#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b, v;
    int day = 1;

    cin >> a >> b >> v;
    
    day = (v - b - 1) / (a - b) + 1;
    
    cout << day << '\n';

    return 0;
}