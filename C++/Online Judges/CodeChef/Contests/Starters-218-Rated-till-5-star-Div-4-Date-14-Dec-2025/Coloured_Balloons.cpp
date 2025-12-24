#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }

        int cost = 0;

        for (int i = 1; i <= n; i++)
        {
            cost += (i * a[i]);
        }

        cout << cost << endl;
    }

    return 0;
}