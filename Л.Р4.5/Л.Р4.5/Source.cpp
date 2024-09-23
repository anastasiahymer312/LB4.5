
#include <iostream> 
#include <iomanip> 
#include <time.h> 
	using namespace std;
int main()
{
	double x, y, R;
	cout << "R = "; cin >> R;
	srand((unsigned)time(NULL));
	for (int i = 0; i < 10; i++)
	{
		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;
		if  ((y >= 0 && x * x + y * y <= R * R) ||
			(x <= 0 && y >= -R && y <= x))

			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
	cout << endl << fixed;
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|     " << setw(10) << "Point(x,y)" << "  |"
		<< setw(6) << "Answer" << " |" << endl;
	cout << "---------------------------" << endl;
	for (int i = 0; i < 10; i++)

	{

		double x = 2.0 * R * rand() / RAND_MAX -  R;
		double y = 2.0 * R * rand() / RAND_MAX -  R;
		if ((y >= 0 && x * x + y * y <= R * R) ||
			(x <= 0 && y >= -R && y <= x))
			cout << "|" << setw(8) << setprecision(4) << x << " "
			<< setw(8) << setprecision(4) << y << "|" << "  yes" << "  |" << endl;
		else
			cout << "|" << setw(8) << setprecision(4) << x << " "
			<< setw(8) << setprecision(4) << y << "|" << "  no" << "   |" << endl;



		cout << "---------------------------" << endl;
	}
	return 0;
}