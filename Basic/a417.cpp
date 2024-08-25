#include <iostream>
using namespace std;

int main()
{
    int num, n, m, a = 1, x, y, b = -1, number, c = 1;
    int arr[100][100] = {0};
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        number = 1;
        x = -1;
        y = -1;
        scanf("%d %d", &n, &m);
        if (m == 1) 
        {
            a = 2;
            c = 1;
        }
        else 
        {
            a = 3;
            c = -1;
        }
        for (int j = 0; j < n; j++)
        {
            if (a == 2)
            {
                x++;
                arr[0][x] = number;
            }
            else
            {
                y++;
                arr[y][0] = number;
            }
            number++;
        }
        a += c;
        if (a > 3)
            a = 0;
        if (a < 0)
            a = 3;
        if (y == -1)
            y = 0;
        if (x == -1)
            x = 0;
        printf("\n");
        for (int j = n - 1; j >= 0; j--)
        {
            for (int k = 0; k < 2; k++)
            {
                if (a == 2 || a == 3)
                    b = 1;
                else
                    b = -1;
                for (int l = 0; l < j; l++)
                {
                    if (a % 2 == 0)
                    {
                        x += b;
                        arr[y][x] = number;
                    }
                    else
                    {
                        y += b;
                        arr[y][x] = number;
                    }
                    number++;
                }
                a += c;
                if (a > 3)
                    a = 0;
                if (a < 0)
                    a = 3;
            }
        }
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                printf("%5d", arr[j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
}