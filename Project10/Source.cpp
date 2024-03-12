#include <iostream>
#include <Windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int zadacha;
	std::cout << "Какое задание вы хотите проверить ? 1, 2, 3 ";
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
		std::cout << "Минимальный элемент" << min;
		std::cout << "\nМаксимальный элемент" << max;
	}
	else if (zadacha == 2)
	{
		int num; 
		int sum =0; 
		int minD;
		int maxD;
		const int size = 5;
		int arra[size]{ };
		std::cout << "Введите минимальный диапазон";
		std::cin >> minD;
		std::cout << "Введите максимальный диапазон";
		std::cin >> maxD;
		std::cout << "Массив: ";
		for (int i = 0; i < maxD; i++)
		{
			arra[i] = minD + i; 
			std::cout << arra[i] << " ";
		}
		std::cout << "Введите число с которым будем сравнивать";
		std::cin >> num;

		for (int i = 0; i < size; i++)

		{
			if (arra[i] < num)
			{
				sum += arra[i];
			}
		}
		std::cout<<"Сумма элементов = "<< sum; 

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
			std::cout << "Введите прибыль за " << i + 1 << " месяц: ";
			std::cin >> profits[i];
		}

		std::cout << "Введите диапазон: ";
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

		std::cout << "Максимальная прибыль была в " << maxMonth << " месяце: " << maxProfit;
		std::cout << "\nМинимальная прибыль была в " << minMonth << " месяце: " << minProfit;//не выводит мин прибыль почему не знаю
	}
	else
	{
		std::cout << "Такой нет";

	}
}