#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    int n[11];
    int sum;
    getline (cin , s);
	sum=0;
    for (int i = 0; i < 9; i++)
    {
        n[i] = int(s[i]) - 48;
    }
    for (int i = 0; i < 8; i++)
    {
        sum = sum + (n[i] * (8 - i));
    }
    sum = sum + n[8];
	if (sum % 10 == 0)
    {
		printf("BNZ");
	}
	else if (sum % 10 == 9)
    {
		printf("AMW");
	}
	else if (sum % 10 == 8)
    {
		printf("KLY");
	}
	else if (sum % 10 == 7)
    {
		printf("JVX");
	}
	else if (sum % 10 == 6)
    {
		printf("HU");
	}
	else if (sum % 10 == 5)
    {
		printf("GT");
	}
	else if (sum % 10 == 4)
    {
		printf("FS");
	}
	else if (sum % 10 == 3)
    {
		printf("ER");
	}
	else if (sum % 10 == 2)
    {
		printf("DOQ");
	}
	else if (sum % 10 == 1)
    {
		printf("CIP");
	}
}