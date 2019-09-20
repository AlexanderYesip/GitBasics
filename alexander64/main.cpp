#include<iostream>
using namespace std;
#define DELIMITER "\n------------------------------------------------------------------------\n"

const int ROWS = 4;// Количество строк двумерного массива
const int COLS = 5;// Количество элементов строки

void FillRand(int Arr[], const int n);
void FillRand(double Arr[], const int n);
void FillRand(float Arr[], const int n);
void FillRand(int Arr[ROWS][COLS], const int ROWS, const int COLS);

void Print(int Arr[], const int n);
void Print(double Arr[], const int n);
void Print(float Arr[], const int n);
void Print(int Arr[ROWS][COLS], const int ROWS, const int COLS);

void Sort(int Arr[], const int n);
void Sort(double Arr[], const int n);
void Sort(float Arr[], const int n);
void Sort(int Arr[ROWS][COLS], const int ROWS, const int COLS);

int Sum(int Arr[], const int n);
int Sum(double Arr[], const int n);
int Sum(float Arr[], const int n);
int Sum(int Arr[ROWS][COLS], const int ROWS, const int COLS);

double Avg(int Arr[], const int n);
double Avg(double Arr[], const int n);
double Avg(float Arr[], const int n);
double Avg(int Arr[ROWS][COLS], const int ROWS, const int COLS);

int minValueIn(int Arr[], const int n);
int minValueIn(double Arr[], const int n);
int minValueIn(float Arr[], const int n);
int minValueIn(int Arr[ROWS][COLS], const int ROWS, const int COLS);

int maxValueIn(int Arr[], const int n);
int maxValueIn(double Arr[], const int n);
int maxValueIn(float Arr[], const int n);
int maxValueIn(int Arr[ROWS][COLS], const int ROWS, const int COLS);
/*
void ShiftLeft(int Arr[], const int n);
void ShiftRight(int Arr[], const int n);
*/
void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int Arr[n];
	cout << endl;
	FillRand(Arr, n);
	Print(Arr, n);
	cout << "Сумма єлементов массива: " << Sum(Arr, n) << endl;
	cout << "Среднее арифметическое єлементов массива: " << Avg(Arr, n) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(Arr, n) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(Arr, n) << endl;

	double Brr[n];
	FillRand(Brr, n);
	Print(Brr, n);
	Sort(Brr, n);
	cout << "Сумма єлементов массива: " << Sum(Brr, n) << endl;
	cout << "Среднее арифметическое єлементов массива: " << Avg(Brr, n) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(Brr, n) << endl;

	float Drr[n];
	FillRand(Drr, n);
	Print(Drr, n);
	cout << "Сумма єлементов массива: " << Sum(Drr, n) << endl;
	cout << "Среднее арифметическое єлементов массива: " << Avg(Drr, n) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(Drr, n) << endl;


	int Crr[ROWS][COLS];
	FillRand(Crr, ROWS, COLS);
	Print(Crr, ROWS, COLS);
	Sort(Crr, ROWS, COLS);
	cout << DELIMITER << endl;
	Print(Crr, ROWS, COLS);
	cout << "Сумма массива: " << Sum(Crr, ROWS, COLS) << endl;;
	cout << "Среднее арифметическое элементов массива: " << Avg(Crr, ROWS, COLS) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(Crr, ROWS, COLS) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(Crr, ROWS, COLS) << endl;

}

void FillRand(int Arr[], const int n)
{
	//заполнение случайными числами:
	for (int i = 0; i < n; i++)Arr[i] = rand() % 100;
}
void FillRand(double Arr[], const int n)
{
	//заполнение случайными числами:
	for (int i = 0; i < n; i++)
	{
		Arr[i] = rand() % 10000;
		Arr[i] /= 100;
	}
}
void FillRand(float Arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		Arr[i] = rand() % 10000;
		Arr[i] /= 100;
	}
}
void FillRand(int Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			Arr[i][j] = rand() % 100;
		}
	}
}

void Print(int Arr[], const int n)
{
	// вывод массива на экран:
	for (int i = 0; i < n; i++)cout << Arr[i] << "\t";
	cout << endl;
	cout << endl;
}
void Print(double Arr[], const int n)
{
	// вывод массива на экран:
	for (int i = 0; i < n; i++)cout << Arr[i] << "\t";
	cout << endl;
	cout << endl;
}
void Print(float Arr[], const int n)
{
	for (int i = 0; i < n; i++)cout << Arr[i] << "\t";
	cout << endl;
	cout << endl;
}
void Print(int Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << Arr[i][j] << "\t";

		}
		cout << endl;
	}
}

void Sort(int Arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (Arr[j] < Arr[i])
			{
				int buffer = Arr[i];
				Arr[i] = Arr[j];
				Arr[j] = buffer;
			}
		}
	}
}
void Sort(double Arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (Arr[j] < Arr[i])
			{
				int buffer = Arr[i];
				Arr[i] = Arr[j];
				Arr[j] = buffer;
			}
		}
	}
}
void Sort(float Arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (Arr[j] < Arr[i])
			{
				int buffer = Arr[i];
				Arr[i] = Arr[j];
				Arr[j] = buffer;
			}
		}
	}
}
void Sort(int Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int iterations = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = i; k < ROWS; k++)
			{
				int l;

				/*if (k == i)l = j + 1; else l = 0;*/
				   // (k == i) ? l = j + l : l = 0;
				l = (k == i) ? j + 1 : 0;
				for (; l < COLS; l++)
				{
					if (Arr[k][l] < Arr[i][j])
					{
						int buffer = Arr[i][j];
						Arr[i][j] = Arr[k][l];
						Arr[k][l] = buffer;
					}
					iterations++;
				}
			}
		}
	}
	cout << "Массив отсортирован за " << iterations << " итераций\n";
}

int Sum(int Arr[], const int n)//сумма єлемент.
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += Arr[i];
	}
	return sum;
}
int Sum(double Arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += Arr[i];
	}
	return sum;
}
int Sum(float Arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += Arr[i];
	}
	return sum;
}
int Sum(int Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += Arr[i][j];
		}
	}
	return sum;
}

double Avg(int Arr[], const int n) //Среднее арифм.
{
	/* double total = Sum(Arr, n);
	double avg = total / n;
	return avg;*/
	return (double)Sum(Arr, n) / n;
}
double Avg(double Arr[], const int n)
{
	return (double)Sum(Arr, n) / n;
}
double Avg(float Arr[], const int n)
{
	return (double)Sum(Arr, n) / n;
}
double Avg(int Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(Arr, ROWS, COLS) / (ROWS * COLS);
}

int minValueIn(int Arr[], const int n) //минимальное значение
{
	int min = Arr[0];
	for (int i = 0; i < n; i++)
	{
		if (Arr[i] < min)
		{
			min = Arr[i];
		}
	}
	return min;
}
int minValueIn(double Arr[], const int n)
{
	double min = Arr[0];
	for (int i = 0; i < n; i++)
	{
		if (Arr[i] < min)
		{
			min = Arr[i];
		}
	}
	return min;
}
int minValueIn(float Arr[], const int n)
{
	int min = Arr[0];
	for (int i = 0; i < n; i++)
	{
		if (Arr[i] < min)
		{
			min = Arr[i];
		}
	}
	return min;
}
int minValueIn(int Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int min = Arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (Arr[i][j] < min)
			{
				min = Arr[i][j];
			}
		}
	}
	return min;
}

int maxValueIn(int Arr[], const int n)//максимальное значение
{
	int max = Arr[0];
	for (int i = 0; i < n; i++)
	{
		if (Arr[i] > max)
		{
			max = Arr[i];
		}
	}
	return max;
}
int maxValueIn(double Arr[], const int n)
{
	int max = Arr[0];
	for (int i = 0; i < n; i++)
	{
		if (Arr[i] > max)
		{
			max = Arr[i];
		}
	}
	return max;
}
int maxValueIn(float Arr[], const int n)
{
	int max = Arr[0];
	for (int i = 0; i < n; i++)
	{
		if (Arr[i] > max)
		{
			max = Arr[i];
		}
	}
	return max;
}
int maxValueIn(int Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int max = Arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (Arr[i][j] > max)
			{
				max = Arr[i][j];
			}
		}
	}
	return max;
}