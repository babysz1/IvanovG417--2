#include<iostream> // ������������ ����
#include<locale.h>
//���� 1. ��������� C/C++, �������� ����������� ��������� C//C++

//main - ��-������ - �������, ��-������ - ����� �����
// �� ���� ��������� ������ ���� ������ ���� ������� main()
int main()
{
	// ����� ���� � ��������, ����������, � ������ ����� �������� ������� ����
	// � C/C++ ���������� ��������� �������� 

	/* ������������� ����������
	* 1. �������������� (+, -, *, /, % - ������� �� ������ �������,
	                     ++ - ��������� �� �������, ��� "���������"
						 -- - ��������� �� �������, ��� "���������"
    *    ���������� ��� ������ (|| - �������� "���", && - �������� "�")
	*    �������� (& - �������� "�", | - �������� "���")
	*    ��������� ��������� (> - ������, < - ������, == - �����,
	                          >= - ������ ��� �����, <= - ������ ��� �����)

    */
	setlocale(LC_ALL, "Russian");
	int a = 10;
	int b = 3;
	std::cout << "������������ ������ 1. ��������� C++, �������� ����������� ��������� C//C++ "
		<< std::endl;
	std::cout << "a = 10, b = 3" << std::endl; // endl - ������� �� ���� ������
	std::cout << "10 % 3 - " << 10 % 3 << "\n"; // \n - �� �� �����, ��� � std::endl
	bool c = true;
	bool d = false;
	bool e = true;
   
	std::cout << "������� �" << std::endl;
	std::cout << "\t\tb = true\tb=false" << std::endl;
	std::cout << "a = true" << "\t" << (true && true) << "\t\t" << (true && false) << std::endl;
	std::cout << "a = false" << "\t" << (false && true) << "\t\t" << (false && false) << std::endl;


	bool f = true;
	bool g = false;
	bool h = true;

	std::cout << "������� ���" << std::endl;
	std::cout << "\t\tb = true\tb = false" << std::endl;
	std::cout << "a = true" << "\t" << (true || true) << "\t\t" << (true || false) << std::endl;
	std::cout << "a = false" << "\t" << (false || true) << "\t\t" << (false || true) << std::endl;
    std::system("pause"); // ����� ������� system() �� ����������� ���������� �����
	return 0;
}