#include <iostream>
#include "print_dynamic_array.h"
#include "check_size.h"

int main()
{
	setlocale(LC_ALL, "Russian"); // ������ ������� �����
	std::system("chcp 1251"); // ��������� ��������� �������
	int total_size, logical_part;

	for (bool i = false;i!=true;)
	{
		std::system("cls"); // �������� �����
		std::cout << "������� �������c��� ������ �������: ";
		std::cin >> total_size;
		std::cout << "������� ���������� ������ �������: ";
		std::cin >> logical_part;
		i = check_size(total_size, logical_part);
	}

	int* stat_array = new int [total_size] {};

	print_dynamic_array(stat_array, logical_part, total_size);

	delete[] stat_array;
	std::cout << std::endl;
	return 41;
}