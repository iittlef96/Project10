#include <iostream>
#include <Windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int zadacha;
	std::cout << "����� ������� �� ������ ��������� ? 1, 2, 3 ";
	std::cin >> zadacha;
	if (zadacha == 1)
	{
		int min;
		int max;
		const int size = 5;
		int arr[size]{ 2, 5, 8, 9, 6 };
		for (size_t i = 0; i < size; i++)
		{
			min = arr[0];
			max = arr[0];
			for (int i = 1; i < size; i++) {
				if (arr[i] < min) {
					min = arr[i];
				}
				if (arr[i] > max) {
					max = arr[i];
				}
			}
			
		}
		std::cout << "����������� �������" << min;
		std::cout << "\n������������ �������" << max;
	}
	else if (zadacha == 2)
	{
		int num; 
		int sum =0; 
		int minD;
		int maxD;
		const int size = 5;
		int arra[size]{ };
		std::cout << "������� ����������� ��������";
		std::cin >> minD;
		std::cout << "������� ������������ ��������";
		std::cin >> maxD;
		std::cout << "������: ";
		for (int i = 0; i < maxD; i++)
		{
			arra[i] = minD + i; 
			std::cout << arra[i] << " ";
		}
		std::cout << "������� ����� � ������� ����� ����������";
		std::cin >> num;

		for (int i = 0; i < size; i++)

		{
			if (arra[i] < num)
			{
				sum += arra[i];
			}
		}
		std::cout<<"����� ��������� = "<< sum; 

	}
	else if (zadacha == 3)
	{
		int start; 
		int end;
		int maxProfit = 0; 
		int minProfit = 0;
		int maxMonth = 0; 
		int minMonth =0;

		const int size = 12;
		int profits[size];

		for (int i = 0; i < size; i++) {
			std::cout << "������� ������� �� " << i + 1 << " �����: ";
			std::cin >> profits[i];
		}

		std::cout << "������� ��������: ";
		std::cin >> start >> end;

		for (int i = start - 1; i < end; i++) {
			if (profits[i] > maxProfit) {
				maxProfit = profits[i];
				maxMonth = i + 1;
			}
		}
		for (int i = start - 1; i < end; i++) {
			if (profits[i] < minProfit) {
				minProfit = profits[i];
				minMonth = i + 1;
			}
		}

		std::cout << "������������ ������� ���� � " << maxMonth << " ������: " << maxProfit;
		std::cout << "\n����������� ������� ���� � " << minMonth << " ������: " << minProfit;//�� ������� ��� ������� ������ �� ����
	}
	else
	{
		std::cout << "����� ���";

	}
}