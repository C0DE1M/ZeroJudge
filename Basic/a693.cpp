#include <iostream>
using namespace std;

int main()
{
    int n, m, ans, start, end;
    while (scanf("%d %d", &n, &m) != EOF)
    {
        int arr[n], sum[n + 1];
        sum[0] = 0;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
            sum[i + 1] = sum[i] + arr[i];
        }
        for (int i = 0; i < m; i++)
        {
            ans = 0;
            scanf("%d %d", &start, &end);
            printf("%d\n", sum[end] - sum[start - 1]);
        }
    }
}