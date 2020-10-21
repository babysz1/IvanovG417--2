#include<iostream> // заголовочный файл
#include<locale.h>
//ТЕМА 1. ОПЕРАТОРЫ C/C++, СТРОЕНИЕ МИНИМАЛЬНОЙ ПРОГРАММЫ C//C++

//main - во-первых - функция, вт-вторых - точка входа
// во всей программе должна быть только одна функция main()
int main()
{
	// блоки кода в функциях, операторах, и просто блоки отдельно взятого кода
	// в C/C++ окружаются фигурными скобками 

	/* Классификация операторов
	* 1. Арифмитические (+, -, *, /, % - остаток от целого деления,
	                     ++ - увеличить на единицу, или "инкремент"
						 -- - уменьшить на единицу, или "декремент"
    *    Логические или Булевы (|| - оператор "или", && - оператор "и")
	*    Бинарные (& - бинарное "и", | - бинарное "или")
	*    Операторы сравнения (> - больше, < - меньше, == - равно,
	                          >= - больше или равно, <= - меньше или равно)

    */
	setlocale(LC_ALL, "Russian");
	int a = 10;
	int b = 3;
	std::cout << "Лабораторная работа 1. ОПЕРАТОРЫ C++, СТРОЕНИЕ МИНИМАЛЬНОЙ ПРОГРАММЫ C//C++ "
		<< std::endl;
	std::cout << "a = 10, b = 3" << std::endl; // endl - перенос на след строку
	std::cout << "10 % 3 - " << 10 % 3 << "\n"; // \n - то же самое, что и std::endl
	bool c = true;
	bool d = false;
	bool e = true;
   
	std::cout << "Твблица И" << std::endl;
	std::cout << "\t\tb = true\tb=false" << std::endl;
	std::cout << "a = true" << "\t" << (true && true) << "\t\t" << (true && false) << std::endl;
	std::cout << "a = false" << "\t" << (false && true) << "\t\t" << (false && false) << std::endl;


	bool f = true;
	bool g = false;
	bool h = true;

	std::cout << "Твблица ИЛИ" << std::endl;
	std::cout << "\t\tb = true\tb = false" << std::endl;
	std::cout << "a = true" << "\t" << (true || true) << "\t\t" << (true || false) << std::endl;
	std::cout << "a = false" << "\t" << (false || true) << "\t\t" << (false || true) << std::endl;
    std::system("pause"); // вызов функции system() из стандартной библиотеки языка
	return 0;
}