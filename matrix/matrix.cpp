#include<iostream>
#include<locale.h>
//Транспонирование матрицы
using namespace std;
int main()
{
	int row = 0;
	setlocale(LC_ALL, "Russian");
	double matrix[3][3] = { 0 };
	std::cout << "Введите элементы матрицы по столбцам и строкам:" << std::endl;
	for (int row = 0; row < 3; row++);
	{
		for (int col = 0; col < 3; col++)
		{
			std::cout << "Строка " << row << ", колонка " << col;
			std::cin >> matrix[row][col];
		}
	}
}



