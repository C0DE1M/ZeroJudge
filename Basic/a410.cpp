#include <iostream>
using namespace std;

int main()
{
	float x, y, z;
	float a, b, c, d, e, f;
	scanf("%f %f %f %f %f %f", &a, &b, &c, &d, &e, &f);
	z = a * e - b * d;
	x = c * e - b * f;
	y = a * f - d * c;
	if (z == 0)
    {
		if (x == 0 && y == 0)
        {
			printf("Too many");
		}
		else
        {
			printf("No answer");
		}
	}
	else
    {
		printf("x=%.2f\ny=%.2f", x / z, y / z);
	}
}