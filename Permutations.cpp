// https://cses.fi/paste/d27283549c14a3e41887ea/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if(n == 1)
    {
        cout << "1";
        return 0;
    }

    if(n == 2 || n == 3)
    {
        cout << "NO SOLUTION";
        return 0;
    }

    for(int i = 2; i <= n; i = i + 2)
        cout << i << "\n";

    for(int i = 1; i <= n; i = i + 2)
        cout << i << "\n";

    return 0;
}
