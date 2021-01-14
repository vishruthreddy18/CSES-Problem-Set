// https://cses.fi/paste/df6f590a235d75e3176384/

#include <iostream>
using namespace std;

int main()
{
    long n;

    cin >> n;
    cout << n << " ";

    while(n != 1)
    {
        if(n % 2)
            n = n * 3 + 1;
        else
            n = n / 2;

        cout << n << " ";
    }

    return 0;
}
