#include<iostream>
#include<locale.h>
#include<iomanip> 
#include<bitset>


// ����������� ����� C/C++

int main()
{
	setlocale(LC_ALL, "Russian");

	// 1. �������� ��������
	// 1.1. �������� if � if...else...
	int salary = 120000;
	bool has_education = false;
	if ((salary < 150000) && has_education) //� ������� ������ ���� ���������� ���������� ��� �������, �������� true ��� false
	{
		std::cout << "����� ��� if" << std::endl;
		// ��, ��� ������ ������ if ���������� ���� ������� � ������� ������� ����� true
	}

	std::string name;
	std::cout << "������� ���� ��� �� ��������:\t";
	std::cin >> name;
	if (name == "Ivan")
	{
		std::cout << "����� ��� ������ if" << std::endl;
	}
	else
	{
		std::cout << "����� ��� else" << std::endl;
	}

	// 1.2 �������� switch...case...default
	int type_of_creditor;         // 1 = "physical",
	                              // 2 = "small_business",
	                              // 3 = "medium_business",
	                              // 4 = "large_business"
	std::cout << "1.2. ������������ ����������� Switch...case... . ������� int type_of_creditor\t";
	std::cin >> type_of_creditor;
	switch (type_of_creditor /*����������, ������� �������� ���������*/)
	{
	    case 1/* "physical"*/:
			std::cout << "��� ������� - \"physical\"" << std::endl;
			break;
	    case 2/* "small_business*/:
			std::cout << "��� ������� - \"small_business\"" << std::endl;
			break;
	    case 3/* "medium_business*/:
			std::cout << "��� ������� - \"medium_business\"" << std::endl;
			break;
		case 4/* "large_business*/:
			std::cout << "��� ������� - \"large_business\"" << std::endl;
			break;
	    default: // ��������, ������� ����������� �� ���� ������ �������
			break;
	}
	
	
	// 1.3 ��������� ��������
	int c = 10;
	// ������ �������� ������� ����� ���� �������� � ���� ������ if (c < 5) {} else {}
	// ��� � ���� ���������� ��������� (/*�������*/)?(/*����� ���� �������==true*/):(/*����� ���� false*/)
	(c < 5) 
		? (std::cout << "��������� �������� true" << std::endl/*���������, ���� true*/)
	    : (std::cout << "��������� �������� false" << std::endl/*���������, ���� false*/);

	// 1.4 �������� ������������ �������� goto
	// � ����������� ���������� ��������� �� ���������, �.� ��� ��� ������� ��������� ���������� ����
	// ���������:
	// � ������ ����� ��������� ��������� �.� �����
lbl_1: // ������������� (��������) � ��������� - ��� ���������� �����
	c++;
	std::cout << "1.4. ������������ goto. c=" << c << std::endl;
	if (c == 15) { goto lbl_exit; }
	goto lbl_1;
	lbl_exit:



	// 2. ����������� �����
	// 2.1. ������� ���� for � ��������� continue � break 
	for (int i = 0/*��������� �������� ����������-��������*/
		i < 7; /*������� �����������, ���� ��� true - ���� ������������*/
		i++/*������������� ��������, ���� ����� - ���������� ��� ���������� ��������*/)
	{
		//.. ���, ������� ����� ���������, ���� ������ ���� (���� ������ ������� �����������)
		// ��������� ����������� �������������� � 15 �������
	}

	// 2.2. ���� � ����. �������� while
	while (/*�������: ��������� � ��������� �������*/ /*�������, ���� ��� == true, ���� �����������*/)
	// 2.3. ���� � ����-�������� do...while
    


	system("pause");
	return 0;
}