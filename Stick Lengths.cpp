// https://cses.fi/paste/28f5a5551293e4bb181315/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, mid, count = 0;
    cin >> n;

    vector<long> arr;

    for(long i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        arr.push_back(t);
    }

    sort(arr.begin(), arr.end());

    mid = arr[arr.size() / 2];

    for(long i = 0; i < n; i++)
    {
        count += abs(mid - arr[i]);
    }

    cout << count;

    return 0;
}
