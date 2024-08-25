
#include <algorithm>
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;

vector<string> arr;

bool com (string a, string b)
{
    int i = 0;
    if (a[0] == '-' ^ b[0] == '-')
    {
        return a[0] == '-';
    }
    else if (a[0] == '-' & b[0] == '-')
    {
        if (a.size() == b.size())
        {
            for (int i = 1; i < a.size(); i++)
            {
                if (a[i] != b[i])
                {
                    return a[i] > b[i];
                }
            }
            return 0;
        }
        else
            return a.size() > b.size();
    }
    else
    {
        if (a.size() == b.size())
        {
            for (int i = 0; i < a.size(); i++)
            {
                if (a[i] != b[i])
                {
                    return a[i] < b[i];
                }
            }
            return 0;
        }
        else
            return a.size() < b.size();
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    string s;
    while (cin >> n)
    {
        arr.clear();
        for (int i = 0; i < n; i++)
        {
            cin >> s;
            arr.push_back(s);
        }
        sort(arr.begin(), arr.end(), com);
        for (int i = 0; i < arr.size(); i++)
        {
            cout << arr[i] << "\n";
        }
    }
}