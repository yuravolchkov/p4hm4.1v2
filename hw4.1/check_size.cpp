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
		std::cout << "������! ���������� ������ ������� �� ����� ��������� �����������!" << std::endl;
		std::system("pause");
		return false;
	}
}