#include <iostream>
using namespace std;
int main()
{
	int a;
	cout << "Nhap so: ";
	cin >> a;
	for (int i = 0; i <= a;i++)
	{
		for (int j = 0; j <= i;j++)
		{
				cout << "* ";
		}
		cout << endl;
	}

	cout << endl << endl;

	for (int i = 0; i <= a;i++)
	{
		for (int j = 5; j >= i; j--)
		{
				cout << "* ";
		}
		cout << endl;
	}


	int cd, cr;
	cout << "Ve hinh chu nhat!!!\n";
	cout << "Nhap CD: ";
	cin >> cd;
	cout << "Nhap CR: ";
	cin >> cr;
	for (int i = 0; i < cr; i++)
	{
		for (int j = 0; j < cd; j++)
		{
			cout << "* ";
		}cout << endl;
	}
}