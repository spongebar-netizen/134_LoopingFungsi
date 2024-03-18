#include <iostream>
using namespace std;

int main() {

	int x;
	srand(time(0));

	x = rand() % 10;

	cout << "Nilai X Awal = " << x << endl;

	while (x > 4)
	{
		cout << "Perulangan Dengan while" << endl;
		x = rand() % 10;
	}

	cout << "NIlai X Akhir = " << x << endl;

}
