// https://atcoder.jp/contests/abc436/tasks/abc436_a

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    cin >> n;
    cin >> s;

    string toBeAddedAtFirst = "o";

    int size = n - s.size();

    for (int i = 0; i < size; i++)
    {
        s = toBeAddedAtFirst + s;
    }

    cout << s;

    return 0;
}