#include <algorithm>
#include <iostream>
using namespace std;
int t, n;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> t;
    for (int j = 0; j < t; j++)
    {
        int x, y, z, k;
        cin >> x >> y >> z >> k;
        if (x == y && y == z && z == k) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
