#include <iostream>
#include <cstring>

using namespace std;

#define MAX 10050

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    char str1[MAX] = {0}, str2[MAX] = {0};
    int sum[MAX] = {0};
    int len1, len2;
    int a, b;
    int i;

    cin >> str1 >> str2;
    
    len1 = strlen(str1);
    len2 = strlen(str2);
    a = len1 - 1;
    b = len2 - 1;

    if (len1 > len2) {
        for (i = a; i >= 0; i--) {
            if (b < 0)
                sum[i] += str1[i] - '0';
            else
                sum[i] = str1[i] - '0' + str2[b--] - '0';
        }
        for (i = a; i > 0; i--) {
            if (sum[i] >= 10) {
                sum[i] %= 10;
                sum[i - 1] += 1;
            }
        }
        for (i = 0; i < len1; i++) {
            cout << sum[i];
        }
    } else {
        for (i = b; i >= 0; i--) {
            if (a < 0)
                sum[i] += str2[i] - '0';
            else
                sum[i] = str2[i] - '0' + str1[a--] - '0';
        }
        for (i = b; i > 0; i--) {
            if (sum[i] >= 10) {
                sum[i] %= 10;
                sum[i - 1] += 1;
            }
        }
        for (i = 0; i < len2; i++) {
            cout << sum[i];
        }
    }

    return 0;
}