#include <iostream>
using namespace std;

int main()
{
	int n, m;
	while (scanf("%d %d", &n, &m) != EOF)
    {
		int arr[510][510], sum[510][510]={0};
		for (int i = 0; i < n; i++)
        {
			for (int j = 0; j < n; j++)
            {
				scanf("%d", &arr[i][j]);
				sum[i][j + 1] = sum[i][j] + arr[i][j];
			}
			sum[i + 1][0] = sum[i][n];
		}
		for(int i = 0; i < m; i++)
        {
			int x1, x2, y1, y2, ans = 0;
			scanf("%d %d %d %d", &y1, &x1, &y2, &x2);
			for(int j = y2 - 1; j >= y1 - 1; j--)
            {
				ans = ans + (sum[j][x2] - sum[j][x1 - 1]);
			}
			printf("%d\n", ans);
		}
	}
}