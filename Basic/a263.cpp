#include <iostream>
using namespace std;

int months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main()
{
	int y[3][2]; 
	int year, month, day, x;
	while (cin >> year >> month >> day)
    {
		x = 0;
		y[0][0] = year;
		y[1][0] = month;
		y[2][0] = day;
		cin >> year >> month >> day;
		y[0][1] = year;
		y[1][1] = month;
		y[2][1] = day;
		for (int i = 0; i < 2; i++)
        {
			for (int j = 0; j < y[1][i] - 1; j++)
            {
				y[2][i] += months[j];
			}
			if (y[1][i] > 2 && ((y[0][i] % 4 == 0 && y[0][i] % 100 != 0) || y[0][i] % 400 == 0))
            {
				y[2][i]++;
			} // 29的話y[3][i]已經算過了
			if (y[0][i]>0)
            { 
				y[2][i] = y[2][i] + (y[0][i] - 1) * 365 + (y[0][i] - 1) / 4 -(y[0][i] - 1) / 100 + (y[0][i] - 1) / 400;
			}
		}
		x = y[2][1] - y[2][0];
		if (x < 0) x *= -1;
		printf("%d\n", x);
	}
}