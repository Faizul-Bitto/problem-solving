// https://www.codechef.com/problems/P4HOME

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;

        cout << min(y, z) * 2 << endl;
    }

    return 0;
}