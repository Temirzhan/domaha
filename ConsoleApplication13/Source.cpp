#include<math.h>
#include<iostream>
#include<time.h>

using namespace std;
char f;
void main()
{do{
	srand(time(NULL));
	setlocale(LC_ALL, "rus");
	int N;
	cout << "Выберите задание" << endl;
	cin >> N;
	if (N == 1)
	{
		/*1.	Дан целочисленный квадратный массив 10×10. Найти сумму элементов  каждой строки.*/
		int  A[10][10];
		int Z = 0;
		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				A[i][j] = 1 + rand() % 1000;
				cout << "A[" << i << "]" << "[" << j << "]= " << A[i][j] << "\t";
			}
			cout << endl;
		}
		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				Z += A[i][j];
			}
			cout << "Сумма "<<i+1<<" строки= " << Z << endl;
			Z = 0;
		}

	}
	else if (N == 2)
	{
		//2.	Дан целочисленный квадратный массив 4×4. Найти строку с наименьшей суммой элементов
		int A[4][4];
		int min=1000000;
		int index;
		int Z=0;
		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				A[i][j] = 1 + rand() % 1000;
				cout << "A[" << i << "]" << "[" << j << "]= " << A[i][j] << "\t";
			}
			cout << endl;
		}
		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				Z += A[i][j];
			}
			if (min > Z)
			{
				index=i;
				min = Z;
			}
			Z = 0;
		}
		cout << "Наименьшая строка " << index << endl;;
	}
	else if (N == 3)
	{
		//3.	Дана целочисленная матрица  6× 8. Найти произведение положительных элементов первого столбца.
		int A[6][8]; int Z = 1;
		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				A[i][j] = -10 + rand() % 30;
				cout << "A[" << i << "]" << "[" << j << "]= " << A[i][j] << "\t";
			}
			cout << endl;
		}
		for (int i = 0; i < 8; i++)
		{
			if(A[i][0]>0)
			Z *= A[i][0];
		}
		cout << "Произведение = " << Z << endl;
	}
	else if (N == 4)
	{
		/*4.	5.	Дан двухмерный целочисленный массив A(M,N). Составить  одномерный массив B из номеров строк этого массива.*/
		int A[6][4];
		int B[6];
		for (int i = 0; i < 6; i++)
		{
			B[i] = i;
			for (int j = 0; j < 4; j++)
			{
				A[i][j] = -10 + rand() % 30;
				cout << "A[" << i << "]" << "[" << j << "]= " << A[i][j] << "\t";
			}
			cout << endl;
		}
		for (int i = 0; i < 6; i++)
		{
			B[i] = i;
				cout << "B[" << i << "]= " << B[i] << endl;
			
		}
	}
	cout << "Ходите продолжить Y-da" << endl;
		cin >> f;
	} while (f == 'y');
}