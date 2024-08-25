#include <iostream>
#include <algorithm>
using namespace std;

pair <int, int> arr[1000];

bool cmp(pair <int, int> a, pair<int, int> b)
{
	if (a.first == b.first)
        return a.second < b.second;
	return a.first < b.first;
}

int main()
{
    int x, y, n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &x, &y);
        arr[i].first = x;
        arr[i].second = y;
    }
    sort(arr, arr + n, cmp);
	for(int i = 0; i < n; i++)
    {
		printf("%d %d\n", arr[i].first, arr[i].second);
	}
}