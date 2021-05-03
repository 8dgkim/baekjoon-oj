#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<pair<int, int>> candidate;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t, n;
    int a, b;
    int max = 0, testing = 0, accepted = 1;
    int i, j, k;

    cin >> t;

    for (i = 0; i < t; i++) {
        cin >> n;
        max = n;

        for (j = 0; j < n; j++) {
            cin >> a >> b;
            candidate.push_back(pair<int, int>(a, b));
        }

        sort(candidate.begin(), candidate.end());
        
        testing = candidate[0].second;
        for (j = 1; j < n; j++) {
            if (testing > candidate[j].second) {
                accepted += 1;
                testing = candidate[j].second;
            }
        }
        
        cout << accepted << '\n';

        accepted = 1;
        candidate.clear();
    }
    
    return 0;
}