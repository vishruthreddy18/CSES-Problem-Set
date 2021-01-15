// https://cses.fi/paste/758a83dbae38ba5b177446/

#include <iostream>
using namespace std;

int main()
{
    long n, sum = 0;
    cin >> n;
    long total = n * (n + 1) / 2;

    long arr[n];
    for(long i = 0; i < n - 1; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    cout << total - sum;
    return 0;
}
