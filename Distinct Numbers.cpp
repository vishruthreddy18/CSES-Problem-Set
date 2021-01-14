#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, count = 1;
    cin >> n;

    if(n == 0 || n == 1)
        return n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end());

    for(int i = 1; i < n; i++)
    {
        if(arr[i] != arr[i - 1])
            count++;
    }

    cout<<count;

    return 0;
}
