// https://cses.fi/paste/99c6c996dc0941bd182cab/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long n;
    vector<long> arr;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        arr.push_back(t);
    }

    long long curr = 0, maxS = INT_MIN;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] > curr + arr[i])
            curr = arr[i];
        else
            curr = curr + arr[i];
        maxS = max(curr, maxS);
    }

    cout << maxS;

    return 0;
}
