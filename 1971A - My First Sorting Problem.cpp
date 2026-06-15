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
        int x, y;
        cin >> x >> y;
        cout << min(x, y) << " " << max(x, y) << "\n";
    }
    return 0;
}
