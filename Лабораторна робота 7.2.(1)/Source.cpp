// ����� �����
// ����������� ������ � 7.2.(1)
// ����������� ������������� ������ 
// ������������ ���������.
// ������ 25

#include <iostream>
#include <iomanip>
#include <time.h>
#include <Windows.h>
using namespace std;

void Create(int** a, const int n, const int Low, const int High);
void Print(int** a, const int n);
int Sum(int** a, const int n);

int main()
{
	SetConsoleOutputCP(1251);
	srand((unsigned)time(NULL));
	int Low;
	int High;
	int n;

	cout << "������ ��������� ��������� �������:" << endl;
	cin >> n;
	cout << "������ �������� ������� �������� �������� �������:" << endl;
	cin >> Low;
	cout << "������ �������� ������� �������� �������� �������:" << endl;
	cin >> High;

	int** a = new int* [n];
	for (int i = 0; i < n; i++)
		a[i] = new int[n];
	Create(a, n, Low, High);
	Print(a, n);
	int S = Sum(a, n);
	cout << "���� �������� ������� ������� - " << S << endl;

	delete[] a;
	return 0;
}
void Create(int** a, const int n, const int Low, const int High)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			a[i][j] = Low + rand() % (High - Low + 1);
}
void Print(int** a, const int n)
{
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(4) << a[i][j];
		cout << endl;
	}
	cout << endl;
}
int Sum(int** a, const int n)
{
	int S = 0;
	for (int i = 0; i < n; i++)
		S += a[i][i];
	return S;
}