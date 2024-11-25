#include <iostream>
using namespace std;
int main()
{
	cout << "nhap so chan!\n";
	int so, tongchan = 0, tongle = 0,tong=0;
	cout << "nhap so:"; cin >> so;
	for (int i = 1; i < so; i++)
	{
		tong += i;
		if (i % 2 == 0)
		{
			cout << i << " ";
			tongchan += i;
		}
		else
		{
			tongle += i;
		}
	}
	cout << "\ntong cac so:" << tong;
	cout << "\ntong cac so chan:" << tongchan;
	cout << "\ntong cac so le:" << tongle;
	cout << endl;
	return 0;
}
