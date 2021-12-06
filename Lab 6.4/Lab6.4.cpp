#include <iostream>
#include <iomanip>
#include <conio.h>
#include <cstdlib>
#include <ctime>

using namespace std;

void Create(int* a, const int n, int Low, int High)
{
	for (int i = 0; i < n; i++)
		a[i] = Low + rand() % (High - Low + 1);
}
void Print(int* a, const int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(4) << a[i];
	cout << endl;
}
int Min(int* a, const int n) {
	int min = abs(a[0]);
	for (int i = 0; i < n; i++)
		if (abs(a[i]) < min)
			min = abs(a[i]);
	return min;
}
int Sum(int* a, const int n) {
	int S = 0;
	int m;
	for (int i = 0; i < n; i++)
		if (a[i] == 0) {
			m = i;
			for (m = i; m < n; m++) {
				S += abs(a[m]);
			}
		}
	return S;
}
void Masuv(int* a, const int n) {
	for (int i = 0; i < n; i += 2)
		cout << a[i] << " ";
	for (int i = 1; i < n; i += 2)
		cout << a[i] << " ";

}
int main()
{
	srand((unsigned)time(NULL));
	int n;
	cout << "n="; cin >> n;
	int* a = new int[n];
	int Low;
	cout << "Low="; cin >> Low;
	int High;
	cout << "High="; cin >> High;
	Create(a, n, Low, High);
	Print(a, n);
	cout << " min = " << Min(a, n) << endl;
	cout << " Sum = " << Sum(a, n) << endl;
		Masuv(a, n);
	return 0;
}
