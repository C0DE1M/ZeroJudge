#include <iostream>
using namespace std;

int main()
{
    int a, b, n, i;
	while (scanf("%d %d %d", &a, &b, &n) != EOF)
    {
		printf("%d.", a / b);
		a = a % b;
		if (n != 0)
        {
		    for(i = 0; i < n; i++)
            {
			    a *= 10;
			    printf("%d", a / b);
			    a = a % b;
			    if (a == 0)
                {
				    printf("%0*d", n - i - 1, 0);
				    break;
			    }
		    }
		    printf("\n");
	    }
    }
}