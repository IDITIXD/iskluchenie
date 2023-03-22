// iskluch
#include <iostream>
#include <string>
using namespace std;


class Raschet
{
public:
	double z1, z2, znam, chisl;
	Raschet() {}
	~Raschet() {}

	void Z1(double m) {
		try {
			znam = ZNAM(3 * sqrt(m * 1 / 3) - 2 / sqrt(m * 1 / 3));
			chisl = Divide((3 * m * 1 / 3 + 2) * (3 * m * 1 / 3 + 2) - 24 * m * 1 / 3);
			z2 = -Divide(m * 1 / 3);
			printf("% 15f", chisl / znam);
			printf("% 15f", z2);
			cout << endl;
		}

		catch (double l) {
			printf("% 23s", "ОШИБКА\n");
		}

	}

	double Divide(double M)
	{
		if (M <= 0) throw M;
		return sqrt(M);
	}
	double ZNAM(double M)
	{
		if (M == 0) throw M;
		return M;
	}

};
void main()
{
	setlocale(0, "");
	Raschet Rasch;
	printf("% 15s", "m");
	printf("% 15s", "z1");
	printf("% 15s", "z2\n");
	for (double i = 0; i < 10; i = i + 1) {
		printf("% 15f", i * 1 / 3);
		Rasch.Z1(i);
	}

}
