// ����� �����
// ����������� ������ � 7.2.(2)
// ����������� ������������� ������
// ������������ ���������.
// ������ 25

#include <iostream>
#include <iomanip>
#include <time.h>
#include <Windows.h>
using namespace std;
void CreateRow(int** a, const int rowNo, const int N, const int Low,
	const int High, int colNo)
{
	a[rowNo][colNo] = Low + rand() % (High - Low + 1);
	if (colNo < N - 1)
		CreateRow(a, rowNo, N, Low, High, colNo + 1);
}
void CreateRows(int** a, const int N, const int Low, const int High, int rowNo)
{
	CreateRow(a, rowNo, N, Low, High, 0);
	if (rowNo < N - 1)
		CreateRows(a, N, Low, High, rowNo + 1);
}
void PrintRow(int** a, const int rowNo, const int N, int colNo)
{
	cout << setw(4) << a[rowNo][colNo];
	if (colNo < N - 1)
		PrintRow(a, rowNo, N, colNo + 1);
	else
		cout << endl;
}
void PrintRows(int** a, const int N, int rowNo)
{
	PrintRow(a, rowNo, N, 0);
	if (rowNo < N - 1)
		PrintRows(a, N, rowNo + 1);
	else
		cout << endl;
}
int Sum(int** a, const int n, int i, int S)
{
	S += a[i][i];
	if (i < n - 1)
		return Sum(a, n, i + 1, S);
	else
		return S;
}
int main()
{
	SetConsoleOutputCP(1251);
	srand((unsigned)time(NULL));
	int N;
	cout << "������ ��������� ��������� �������:" << endl;
	cin >> N;
	int** a = new int* [N];
	for (int i = 0; i < N; i++)
		a[i] = new int[N];

	int Low, High;
	cout << "������ �������� ������� �������� �������� �������:" << endl;
	cin >> Low;
	cout << "������ �������� ������� �������� �������� �������:" << endl;
	cin >> High;

	cout << endl;
	CreateRows(a, N, Low, High, 0);
	PrintRows(a, N, 0);

	int S = 0;
	S = Sum(a, N, 0, S);

	cout << "���� �������� ������� ������� - " << S << endl;

	delete[] a;
	return 0;
}