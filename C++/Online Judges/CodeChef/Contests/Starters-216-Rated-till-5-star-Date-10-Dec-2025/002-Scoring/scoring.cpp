// https://www.codechef.com/START216D/problems/SCORING

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x, y;
        cin >> x >> y;

        int i = (y + x) / 2;
        int j = i - x;

        cout << i << " " << j << endl;
    }

    return 0;
}