#include <iostream>

#define maxdigit 4

using namespace std;

int han(int num)
{
    int d_curr, d_prev;
    int result = true;
    int arr[maxdigit] = {0};
    int i, j;

    for (i = maxdigit - 1; i >= 0; i--) {
        arr[i] = num % 10;
        num /= 10;
    }

    for (i = 0; i < maxdigit; i++) {
        if (arr[i] != 0) {
            j = i;
            break;
        }
    }

    d_prev = arr[j + 1] - arr[j];

    if (j == maxdigit - 2 || j == maxdigit - 1) {
        result = true;
    } else {
        for (j; j < maxdigit - 1; j++) {
            
            d_curr = arr[j + 1] - arr[j];

            if (d_curr != d_prev) {
                result = false;
                break;
            }

            d_prev = d_curr; 
        }
    }

    return result;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    int count = 0;
    int i;

    cin >> n;

    for (i = 1; i <= n; i++) {
        if (han(i) == true) {
            count++;
        }
    }

    cout << count << '\n';
    
    return 0;
}