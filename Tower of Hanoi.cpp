// https://cses.fi/paste/9637da18100b84fc189e22/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void TOH(int n, int A, int C, int B)
{
    if(n == 1)
    {
        cout << A << " " << C << "\n";
        return;
    }

    TOH(n - 1, A, B, C);
    cout << A << " " << C << "\n";
    TOH(n - 1, B, C, A);
}

int main()
{
    int n;
    cin >> n;
    int p = pow(2, n);
    cout << p - 1 << "\n";
    TOH(n, 1, 3, 2);
    return 0;
}
