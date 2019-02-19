#include <iostream>
using namespace std;

int main()
{
	int a, b, z;
	cout << "Chislo: " << endl;
	cin >> a;
	z = a;
	cout << " Stepen: " << endl;
	cin >> b;
	cout << "--------" << endl;

	for (int i = 1; i < b; i++) {
		a = a * z;
		cout << a << endl;
	}
	cin.get();
	system("pause");
	return 0;
}