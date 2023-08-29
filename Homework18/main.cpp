#include <iostream>
#include <conio.h>
#include <ctime>

int sum(int a, int b=2, int c=3, int d=4, int e = 5)
{
	return a + b + c + d + e;
}

inline double average(int a, int b, int c)
{
	return (a + b + c) / 3.0;
}

int maximum(int a, int b, int c)
{
	int max = a;
	if (max < b) max = b;
	if (max < c) max = c;
	return max;
}
double maximum(double a, double b, double c)
{
	double max = a;
	if (max < b) max = b;
	if (max < c) max = c;
	return max;
}

short maximum(short a, short b, short c)
{
	short max = a;
	if (max < b) max = b;
	if (max < c) max = c;
	return max;
}

template <typename T>
T massive(T arr[], int size)
{
	T result=0;
	for (int i = 0; i < size; i++)
	{
		for (int j = 2; j <= arr[i]; j++)
		{
			if (arr[i] % j == 0 and arr[i] != j) break;
			return result=arr[i];
		}

	}
	return result;
}


int main()
{

	std::cout << "Task 1 \n\n";
	
	int a=1, b=2, c=3,d=4,e=5;
	std::cout << "Summa = "<<sum(a,b,c);
	std::cout << "\n\n";

	std::cout << "Task 2 \n\n";
	
	std::cout << "Enter the number 1 - ";
	int n, m,l;
	std::cin >> n;
	std::cout << "Enter the number 2 - ";
	std::cin >> m;
	std::cout << "Enter the number 3 - ";
	std::cin >> l;
	std::cout << "Average = " << average(n, m, l);
	std::cout << "\n\n";
	
	std::cout << "Task 3 \n\n";

	double x , y , z;
	std::cout << "Enter the number 1 - ";
	
	std::cin >> x;
	std::cout << "Enter the number 2 - ";
	std::cin >> y;
	std::cout << "Enter the number 3 - ";
	std::cin >> z;
	std::cout << "Maximum = " << maximum(x, y, z) << "\n\n";
	std::cout << "\n\n";

	std::cout << "Task 4 \n\n";
	int const size = 10;
	int arr[size];
	srand(time(NULL));

	for (int i = 0; i < size; i++)
		arr[i] = 1 + rand() % 25;
	for (int i = 0; i < size; i++)
		std::cout << arr[i] << '\t';

	std::cout <<"\n"<< "The fist simple number - " << massive(arr, size) << "\n\n";

	return 0;
}