#include <algorithm>
#include <iostream>
#include <map>
using namespace std;
int t, n, k;
string s;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n >> k >> s;
        map <char, int> a;
        for (char x : s) a[x]++;
        int odd_freq = 0;
        for (auto [i, j] : a) if (j % 2 != 0) odd_freq++;
        if (odd_freq <= k + 1) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
