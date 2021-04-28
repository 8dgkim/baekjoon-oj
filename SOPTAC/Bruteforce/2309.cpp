#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> v;
    int sum = 0, not1 = 0, not2 = 0;
    int input = 0;
    int i, j;

    for (i = 0; i < 9; i++) {
        cin >> input;
        v.push_back(input);
        sum += input;
    }

    sort(v.begin(), v.end());

    for (i = 0; i < 8; i++) {
        for (j = i + 1; j < 9; j++) {
            if ((sum - v[i] - v[j]) == 100) {
                not1 = i;
                not2 = j;
                break;
            }
        }
        if (not1 > 0 && not2 > 0) {
            break;
        }
    }

    for (i = 0; i < 9; i++) {
        if (i != not1 && i != not2) {
            cout << v[i] << '\n';
        }
    }
    
    return 0;
}