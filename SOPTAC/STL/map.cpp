#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    map<string, int> m;
    map<string, int>::iterator it;

    m["lisa"] = 23;
    m["lisa"] = 24;
    m["bob"] = 21;
    m["tom"] = 20;

    m.insert({"key", 22});
    m.erase("bob");

    for (it = m.begin(); it != m.end(); it++) {
        cout << it -> first << " " << it -> second << "\n";
    }
    
    return 0;
}