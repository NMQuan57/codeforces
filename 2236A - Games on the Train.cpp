#include <algorithm>
#include <iostream>
using namespace std;
int t, n;
string s;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        int min_height = 6, max_height = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            min_height = min(min_height, x);
            max_height = max(max_height, x);
        }
        cout << max_height + 1 - min_height << "\n";
    }
    return 0;
}
