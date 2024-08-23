#pragma once
#include <iostream>
#include "check_size.h"

bool check_size(int& total_size, int& logical_part)
{
	if (total_size >= logical_part)
	{
		return true;
	}
	else
	{
		std::cout << "Ошибка! Логический размер массива не может превышать фактический!" << std::endl;
		std::system("pause");
		return false;
	}
}