#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int binarySearch(vector<int>& array, int target, int start, int end)
{   
    if (start > end)
        return 0;

    int mid = (start + end) / 2;

    if (array[mid] == target)
        return 1;
    else if (array[mid] > target)
        return binarySearch(array, target, start, mid - 1);
    else
        return binarySearch(array, target, mid + 1, end); 
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> nArray, mArray;
    int n, m, temp;
    int target, result;
    int i;

    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> temp;
        nArray.push_back(temp);
    }
    cin >> m;
    for (i = 0; i < m; i++) {
        cin >> temp;
        mArray.push_back(temp);
    }

    sort(nArray.begin(), nArray.end());
 
    for (i = 0; i < m; i++) {
        target = mArray[i];
        result = binarySearch(nArray, target, 0, n - 1);
        cout << result << '\n';
    }

    return 0;
}