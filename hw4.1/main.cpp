#include <iostream>
#include "print_dynamic_array.h"
#include "check_size.h"

int main()
{
	setlocale(LC_ALL, "Russian"); // задать русский текст
	std::system("chcp 1251"); // настроить кодировку консоли
	int total_size, logical_part;

	for (bool i = false;i!=true;)
	{
		std::system("cls"); // очистить экран
		std::cout << "¬ведите фактичеcкий размер массива: ";
		std::cin >> total_size;
		std::cout << "¬ведите логический размер массива: ";
		std::cin >> logical_part;
		i = check_size(total_size, logical_part);
	}

	int* stat_array = new int [total_size] {};

	print_dynamic_array(stat_array, logical_part, total_size);

	delete[] stat_array;
	std::cout << std::endl;
	return 41;
}