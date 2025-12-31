#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        float a, b;
        cin >> a >> b;

        float smallCost = (a / 100);
        float largeCost = (b / 225);

        if (smallCost < largeCost)
        {
            cout << "Small" << endl;
        }
        else if (smallCost > largeCost)
        {
            cout << "Large" << endl;
        }
        else
        {
            cout << "Equal" << endl;
        }
    }

    return 0;
}