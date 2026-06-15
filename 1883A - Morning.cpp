/*
author: NMQuan
date: June 15 2026
*/
#include <algorithm>
#include <iostream>
#include <cmath>
using namespace std;
int t;
string s;
int main()
{
    if (fopen("main.inp", "r"))
    {
        freopen("main.inp", "r", stdin);
        freopen("main.out", "w", stdout);
        freopen("main.err", "w", stderr);
    }
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> t;
    for (int j = 0; j < t; j++)
    {
        cin >> s;
        int val1 = (s[0] == '0' ? 10 : s[0] - '0');
        int val2 = (s[1] == '0' ? 10 : s[1] - '0');
        int val3 = (s[2] == '0' ? 10 : s[2] - '0');
        int val4 = (s[3] == '0' ? 10 : s[3] - '0');
        int k = abs(1 - val1) + abs(val1 - val2) + abs(val2 - val3) + abs(val3 - val4) + 4; 
        cout << k << "\n";
    }
    return 0;
}
