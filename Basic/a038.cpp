#include <iostream>
#include <string>
using namespace std;

int main()
{
    string x;
    cin >> x;
    int i = x.length()-1;
    bool flag = 0;
    if (x[x.length() - 1] == '0')
    {
        i -= 1;
    }
    for (; i >= 0; i--)
    {
        if (x[i] != '0')
        {
            flag = 1;
        }
        if(flag == 1)
        {
            cout << x[i];
        }
    }
    if (flag == 0)
    {
        cout << "0";
    }
}