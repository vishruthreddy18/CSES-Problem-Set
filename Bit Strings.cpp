// https://cses.fi/paste/2a345ed73ae3c91917eb5f/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    long long p = 1;

    while(n)
    {
        p = p * 2 % 1000000007;
        n--;
    }

    cout << p;
    return 0;
}
