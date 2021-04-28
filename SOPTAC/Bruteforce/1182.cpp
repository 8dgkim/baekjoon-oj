#include <iostream>
#include <vector>

using namespace std;

vector<int> v;
int n, s;
int total;

void search(int j, int sum)
{
    if (j == n) {
        return;
    }
    if (sum + v[j] == s) {
        total++;
    }

    search(j + 1, sum);
    search(j + 1, sum + v[j]);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int num;
    int i;

    cin >> n >> s;

    for (i = 0; i < n; i++) {
        cin >> num;
        v.push_back(num);
    }

    search(0, 0);

    cout << total << '\n';

    return 0;
}