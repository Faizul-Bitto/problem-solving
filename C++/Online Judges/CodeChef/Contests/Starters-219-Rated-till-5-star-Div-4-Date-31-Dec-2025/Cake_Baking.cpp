#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int extra = m - n;
    cout << min(n, extra) << endl;
    return 0;
}
