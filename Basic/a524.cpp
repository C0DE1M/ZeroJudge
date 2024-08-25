#include <stdio.h>
int n, arr[9], check[9]={0};

void s (int index)
{
	if (index == n)
    {
		for (int i = 0; i < n; i++)
        {
			printf("%d", arr[i]);
		}
		printf("\n");
	}
	else
    {
		for (int i = n - 1; i >= 0; i--)
        {
			if (check[i] == 0)
            {
				arr[index]=i+1;
	    		check[i]=1;
				s(index+1);
				check[i]=0;
			}
		}
	}
}

int main()
{
	while (scanf("%d", &n) != EOF)
    {
		s(0);
	}
}