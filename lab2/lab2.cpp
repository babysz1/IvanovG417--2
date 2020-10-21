#include<iostream>
#include<locale.h>
#include<iomanip> 
#include<bitset>


// КОНСТРУКЦИИ ЯЗЫКА C/C++

int main()
{
	setlocale(LC_ALL, "Russian");

	// 1. УСЛОВНЫЕ ПЕРЕХОДЫ
	// 1.1. Оператор if и if...else...
	int salary = 120000;
	bool has_education = false;
	if ((salary < 150000) && has_education) //в скобках должна быть логическая переменная или условие, выдающее true или false
	{
		std::cout << "зашли под if" << std::endl;
		// всё, что внутри скобок if выолняется если условие в круглых скобках равно true
	}

	std::string name;
	std::cout << "Введите ваше имя на латинице:\t";
	std::cin >> name;
	if (name == "Ivan")
	{
		std::cout << "зашли под второй if" << std::endl;
	}
	else
	{
		std::cout << "зашли под else" << std::endl;
	}

	// 1.2 Оператор switch...case...default
	int type_of_creditor;         // 1 = "physical",
	                              // 2 = "small_business",
	                              // 3 = "medium_business",
	                              // 4 = "large_business"
	std::cout << "1.2. Демонстрация конструкции Switch...case... . Введите int type_of_creditor\t";
	std::cin >> type_of_creditor;
	switch (type_of_creditor /*переменная, которая подлежит сравнению*/)
	{
	    case 1/* "physical"*/:
			std::cout << "Тип клиента - \"physical\"" << std::endl;
			break;
	    case 2/* "small_business*/:
			std::cout << "Тип клиента - \"small_business\"" << std::endl;
			break;
	    case 3/* "medium_business*/:
			std::cout << "Тип клиента - \"medium_business\"" << std::endl;
			break;
		case 4/* "large_business*/:
			std::cout << "Тип клиента - \"large_business\"" << std::endl;
			break;
	    default: // действия, которые выполняются во всех прочих случаях
			break;
	}
	
	
	// 1.3 Тернарный оператор
	int c = 10;
	// кратко условный переход можно даже записать в одну строку if (c < 5) {} else {}
	// или в виде тернарного оператора (/*условие*/)?(/*ветка есди условие==true*/):(/*ветка есди false*/)
	(c < 5) 
		? (std::cout << "Тернарный оператор true" << std::endl/*операторы, если true*/)
	    : (std::cout << "Тернарный оператор false" << std::endl/*операторы, если false*/);

	// 1.4 Оператор безусловного перехода goto
	// в современной разработке стараются не применять, т.к это как минимум уменьшает читаемость кода
	// синтаксис:
	// в нужном месте программы создается т.н метка
lbl_1: // идентификатор (название) и двоеточие - это объявление метки
	c++;
	std::cout << "1.4. Демонстрация goto. c=" << c << std::endl;
	if (c == 15) { goto lbl_exit; }
	goto lbl_1;
	lbl_exit:



	// 2. Конструкция цикла
	// 2.1. Счетный цикл for и операторы continue и break 
	for (int i = 0/*начальное значение переменной-счетчика*/
		i < 7; /*условие продолжения, пока оно true - цикл продолжается*/
		i++/*повторяющийся оператор, чаще всего - уменьшение или увеличение счетчика*/)
	{
		//.. код, который нужно повторять, пока длится цикл (пока длится условие продолжения)
		// заполнить распечаткой самостоятельно к 15 октября
	}

	// 2.2. Цикл с пред. условием while
	while (/*задание: придумать и прописать условие*/ /*условие, пока оно == true, цикл выполняется*/)
	// 2.3. Цикл с пост-условием do...while
    


	system("pause");
	return 0;
}