#include <iostream>
using namespace std;

int main()
{
	int n, m, sum, time;
	while(cin >> n >> m)
    {
		sum = 0;
		time = 0;
		while (1)
        {
			sum += n;
			n++;
			time++;
			if(sum > m) break;
		}
		cout << time << endl;
	}
}