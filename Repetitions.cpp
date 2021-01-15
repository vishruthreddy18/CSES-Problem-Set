// https://cses.fi/paste/010d818bee1276ce1774b0/

#include <iostream>
using namespace std;

int main()
{
    string s;
    int count = -1, temp = 1;

    cin >> s;

    for(int i = 1; i < s.length(); i++)
    {
        if(s[i] == s[i - 1])
            temp++;
        else
        {
            if(temp > count)
                count = temp;
            temp = 1;
        }
    }

    if(temp > count)
        count = temp;

    cout << count;

    return 0;
}
