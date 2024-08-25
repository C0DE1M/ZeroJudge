#include <iostream>
using namespace std;

int main()
{
    int ans[4];
    int test[4];
    bool tmp[2][4];
    int n, a, b;
    while (scanf("%d %d %d %d", &ans[0], &ans[1], &ans[2], &ans[3]) != EOF)
    {
        scanf("%d", &n);
        for (int k = 0; k < n; k++)
        {
            scanf("%d %d %d %d", &test[0], &test[1], &test[2], &test[3]);
            a = 0;
            b = 0;
            for (int i = 0; i < 4; i++)
            {
                tmp[0][i] = 0;
                tmp[1][i] = 0;
                if (test[i] == ans[i])
                {
                    a++;
                    tmp[0][i] = 1;
                    tmp[1][i] = 1;
                }
            }
            for (int i = 0; i < 4; i++)
            {
                for (int j = 0; j < 4; j++)
                {
                    if (test[i] == ans[j] && (tmp[0][j] == 0 && tmp[1][i] == 0))
                    {
                        b++;
                        tmp[0][j] = 1;
                        tmp[1][i] = 1;
                        break;
                    }
                }
            }
            printf("%dA%dB\n", a, b);
        }
    }
}