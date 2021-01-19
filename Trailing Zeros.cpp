// https://cses.fi/paste/d3c3054ea9f43e7417d71f/

#include <iostream>
using namespace std;

int main()
{
    int n, count = 0;
    cin >> n;

    for(int i = 5; i <= n; i = i * 5)
    {
        count = count + n / i;
    }

    cout << count;
    return 0;
}
