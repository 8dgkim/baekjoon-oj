#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    static int arr[10] = {};
    int max, count;
    int i;

    for (i = 0; i < 9; i++)
        cin >> arr[i];

    max = count = 0;

    for (i = 0; i < 9; i++) {
        if (max < arr[i]) {
            max = arr[i];
            count = i + 1;
        }
    }

    cout << max << '\n' << count;
    
    return 0;
}