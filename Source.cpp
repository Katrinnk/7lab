#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void Input(int** a, const int m, const int n);
void Print(int** a, const int m, const int n);
int main()
{
	srand((unsigned)time(NULL));
	int Low = -20;
	int High = 20;
	int m, n;
	cout << "m = "; cin >> m;
	cout << "n = "; cin >> n;
	int** a = new int* [m];
	for (int i = 0; i < m; i++)
		a[i] = new int[n];
	Input(a, m, n);
	Print(a, m, n);
	if (m = n)
		Sum(a,m,n);
	else
		cout << "pereviryty nemozhlyvo";
	for (int i = 0; i < m; i++)
		delete[] a[i];
	delete[] a;
	return 0;
}
void Input(int** a, const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "a[" << i << "][" << j << "] = ";
			cin >> a[i][j];
		}
		cout << endl;
	}
}
void Print(int** a, const int m, const int n)
{
	cout << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(4) << a[i][j];
		cout << endl;
	}
	cout << endl;
}
bool Sum(int** a, const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		if (int j = i)
		{

		}
		
		

	}
}