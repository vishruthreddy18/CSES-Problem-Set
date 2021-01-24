// https://cses.fi/paste/ee4bb7b8460cc607184f09/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, t, a = 0, b = 0;
    vector<int> arr;
    vector<int> temp;

    cin >> n >> x;
    for(int i = 0; i < n; i++)
    {
        cin >> t;
        arr.push_back(t);
    }

    if(x < arr[0] && x > arr[n - 1] + arr[n - 2])
    {
        cout << "IMPOSSIBLE";
        return 0;
    }

    temp = arr;

    sort(temp.begin(), temp.end());

    for(int i = 0, j = n - 1; i < j;)
    {
        if(temp[i] + temp[j] == x)
        {
            a = temp[i];
            b = temp[j];
            break;
        }

        else if (temp[i] + temp[j] < x)
            i++;
        else
            j--;
    }

    int i, j;
    if(a || b)
    {
        for(i = 0; i < n; i++)
        {
            if(arr[i] == a)
                break;
        }

        for(j = n - 1; j >= 0; j--)
        {
            if(arr[j] == b)
                break;
        }

        cout << ++i << " " << ++j;
        return 0;
    }

    cout << "IMPOSSIBLE";

    return 0;
}
