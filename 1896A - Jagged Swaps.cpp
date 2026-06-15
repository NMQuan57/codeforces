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
        cin >> n;
        int val, trash;
        cin >> val;
        for (int i = 1; i < n; i++) cin >> trash;
        if (val == 1) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
