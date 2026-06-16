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
        cin >> n;
        int max_pos = 0, max_neg = (int)-1e9;
        string last = "none";
        long long ans = 0;
        int x;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            if (last == "none")
            {
                if (x > 0) 
                {
                    max_pos = x;
                    last = "pos";
                }
                else 
                {
                    max_neg = x;
                    last = "neg";
                }
            }
            else
            {
                if (x > 0)
                {
                    if (last == "pos") max_pos = max(max_pos, x);
                    else 
                    {
                        ans += max_neg;
                        max_neg = (int)-1e9;
                        max_pos = x;
                        last = "pos";
                    }
                }
                else
                {
                    if (last == "neg") max_neg = max(max_neg, x);
                    else 
                    {
                        ans += max_pos;
                        max_pos = 0;
                        max_neg = x;
                        last = "neg";
                    }
                }
            }
        }
        if (x > 0) ans += max_pos;
        else ans += max_neg;
        cout << ans << "\n";
    }
    return 0;
}
