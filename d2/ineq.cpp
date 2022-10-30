#include <iostream>
#include <cmath>

using namespace std;

int main()
{

	int m = 1;
	while (true)
	{
		int n = 1;

		if (!(pow(m, 4) + 7 * pow(n, 2) < 540))
			break;

		while (pow(m, 4) + 7 * pow(n, 2) < 540)
		{
			cout << "m: " << m << " - n: " << n << endl;
			n++;
		}
		m++;
	}

	return 0;
}
