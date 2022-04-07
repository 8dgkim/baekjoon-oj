#include <iostream>

#define NUMBER 2000000

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    static int arr[NUMBER] = {};
    int min, max;
    int i;

    cin >> n;
    for (i = 0; i < n; i++)
        cin >> arr[i];

    min = max = arr[0];
    for (i = 0; i < n; i++)
        if (max < arr[i])
            max = arr[i];
        else if (min > arr[i])
            min = arr[i];

    cout << min << " " << max;
    
    return 0;
}