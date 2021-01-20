// https://cses.fi/paste/7b58d40bc45c567417eafb/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<long> arr;

    for(int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        arr.push_back(t);
    }

    long long count = 0;

    for(int i = 0; i < n - 1; i++)
    {
        if(arr[i] > arr[i + 1])
        {
            count = count + arr[i] - arr[i + 1];
            arr[i + 1] = arr[i];
        }
    }

    cout << count;

    return 0;
}
