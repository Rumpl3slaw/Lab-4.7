#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() 
{
	double xp, xk, x, dx,esp, a = 0, S = 0, R = 0;
	int n = 0;

	cout << "xp=";cin >> xp;
	cout << "xk=";cin >> xk;
	cout << "dx=";cin >> dx;
	cout << "esp=";cin >> esp;

	cout << fixed;

	cout << "---------------------------------------------------" << endl;
	cout << "|" << setw(5) << "x" << "     |"
		<< setw(10) << "exp(x)" << "   |"
		<< setw(7) << "S" << "       |"

		<< setw(5) << "n" << "    |"
		<< endl;
	x = xp;
	while (x <= xk)
	{
		n = 0;
		a = 2;
		S = a;
		do {
			n++;
			R = pow(x,2*n+1)/(2*n+1);
			a *= R;
			S += a;
		} while (abs(x) < 1);
		cout << "|" << setw(7) << setprecision(2) << x << "   |"
			<< setw(10) << setprecision(5) << exp(x) << "   |"
			<< setw(10) << setprecision(5) << S << "    |"
			<< setw(5) << n << "    |"
			<< endl;
		x += dx;
	}
	cout << "---------------------------------------------------" << endl;
	return 0;
}
