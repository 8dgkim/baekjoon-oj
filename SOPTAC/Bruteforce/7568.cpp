#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<pair<int, int>> size;
    int n = 0;
    int height = 0, weight = 0;
    int rank = 1;
    int i, j;

    cin >> n;

    for (i = 0; i < n; i++) {
        cin >> height >> weight;
        size.push_back(pair<int, int>(height, weight));
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (size[i].first < size[j].first && size[i].second < size[j].second) {
                rank++;
            }
        }
        cout << rank << ' ';
        rank = 1;
    }

    return 0;
}