#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int n, m, arr[2][2], tmp;
    bool map[501][501];
    while (scanf("%d %d", &n, &m) != EOF)
    {
        memset(map, 0, sizeof(map));
        scanf("%d %d", &arr[1][0], &arr[1][1]);
        for (int i = 1; i < m; i++)
        {
            scanf("%d %d", &arr[0][0], &arr[0][1]);
            if (arr[0][0] == arr[1][0])
            {
                for (int j = min(arr[0][1], arr[1][1]); j <= max(arr[0][1], arr[1][1]); j++)
                {
                    map[arr[0][0]][j] = 1;
                }
            }
            else
            {
                for (int j = min(arr[0][0], arr[1][0]); j <= max(arr[0][0], arr[1][0]); j++)
                {
                    map[j][arr[0][1]] = 1;
                }
            }
            arr[1][0] = arr[0][0];
            arr[1][1] = arr[0][1];
        }
        for (int i = 1; i <= n + 2; i++)
        {
            printf("-");
        }
        printf("\n");
        for (int i = 1; i <= n; i++)
        {
            printf("|");
            for(int j = 1; j <= n; j++)
            {
                printf("%c", (map[i][j]) ? '*' : ' ');
            }
            printf("|\n");
        }
        for (int i = 1; i <= n + 2; i++)
        {
            printf("-");
        }
        printf("\n");
    }
}