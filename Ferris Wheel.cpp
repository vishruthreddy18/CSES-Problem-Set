// https://cses.fi/paste/d230db19d0e9232f17d815/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, count = 0, t;
    cin >> n >> x;

    vector<int> arr;
    for(int i = 0; i < n; i++)
    {
        cin >> t;
        arr.push_back(t);
    }

    sort(arr.begin(), arr.end());

    int i, j;
    for(i = 0, j = n - 1; i < j;)
    {
        if(arr[i] + arr[j] <= x)
        {
            count++;
            i++;
            j--;
        }

        else
        {
            count++;
            j--;
        }
    }

    if(i == j)
        count++;

    cout << count;

    return 0;
}
