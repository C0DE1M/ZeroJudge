#include <iostream>
#include <algorithm>
using namespace std;

int n, m, sum;
int arr[30];
bool check[30] = {0};
bool flag;

void dfs(int index)
{
    if (sum == m)
    {
        flag = 0;
        for (int i = 0; i < 30; i++)
        {
            if (check[i])
            {
                printf("%d ", arr[i]);
            }
        }
        printf("\n");
    }
    if (sum >= m)
    {
        check[--index] = 0;
        sum -= arr[index];
        return;
    }
    for(int i = index; i < n; i++)
    {
        //printf("a%d\n", arr[i]);
        sum += arr[i];
        check[i] = 1;
        dfs(i + 1);
    }
    check[--index] = 0;
    sum -= arr[index];
    return;
}

int main()
{
    scanf("%d %d", &n, &m);
    flag = 1;
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    sort(arr, arr + n);
    sum = 0;
    dfs(0);
    if (flag)
    {
        printf("-1\n");
    }
}