#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, min, index, temp;
    int array[1010] = {0};
    int i, j;

    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> array[i];
    }

    for (i = 0; i < n; i++) {
        min = 1010;
        for (j = i; j < n; j++) {
            if (min > array[j]) {
                min = array[j];
                index = j;
            }
        }
        temp = array[i];
        array[i] = array[index];
        array[index] = temp;
    }
    
    for (i = 0; i < n; i++) {
        cout << array[i] << '\n';
    }

    return 0;
}