// https://cses.fi/paste/044a670497cc13e117d773/

#include <iostream>
using namespace std;

int main()
{
    int t, a, b;

    cin >> t;

    for(int i = 1; i <= t; i++)
    {
        cin >> a >> b;

        if(a < b)
        {
            int temp = a;
            a = b;
            b = temp;
        }

        if((a + b) % 3 == 0 && b >= a / 2)
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";
    }

    return 0;
}
