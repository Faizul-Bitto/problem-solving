#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;

        int oneCount = 0, zeroCount = 0;
        int wayCount = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                oneCount++;
            }
            else
            {
                zeroCount++;
            }

            if (oneCount > zeroCount)
            {
                wayCount++;
            }
        }

        cout << wayCount << endl;
    }
    
    return 0;
}
