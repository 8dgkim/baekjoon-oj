#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    map<string, string> log;
    string name, status;
    int n;
    int i;

    cin >> n;

    for (i = 0; i < n; i++) {
        cin >> name >> status;
        log.insert(name, status);
    }

    
    return 0;
}