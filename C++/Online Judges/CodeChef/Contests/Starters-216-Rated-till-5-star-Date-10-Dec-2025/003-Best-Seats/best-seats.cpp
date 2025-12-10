// https://www.codechef.com/START216D/problems/BESTSEATS

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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int minimumCost = INT_MAX;

        for (int i = 0; i < n - 1; i++)
        {
            int sum = a[i] + a[i + 1];
            
            if (sum < minimumCost)
            {
                minimumCost = sum;
            }
        }

        cout << minimumCost << endl;
    }

    return 0;
}