// Pr4_Graf.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
	setlocale(0, "");
	int programNumber;
	cout << "Введите номер программы (от 1 до 2): " << endl;
	cin >> programNumber;
	switch (programNumber) {
		case 1: {
			const int size = 10;
			int arr[size];
			cout << "Введите " << size << "целых чисел для заполнения массива: " << endl;
			for (int i = 0; i < size; ++i)
			{
				cin >> arr[i];
			}
			int count = 0;
			for (int i = 0; i < size; ++i)
			{
				if (arr[i] % 10 == 0)
				{
					++count;
				}
				else
				{
					arr[i] = 0;
				}
			}
			cout << "Число десяток: " << count << endl;
			cout << "Массив после обработки:" << endl;
			for (int i = 0; i < size; ++i)
			{
				cout << arr[i] << " ";
			}
			cout << endl;
			break;
		}
		case 2:
		{
			const int maxSize = 100;
			int arr[maxSize];
			int size;
			cout << "Введите размер массива (не более " << maxSize << "): ";
			cin >> size;
			if (size <= 0 || size > maxSize)
			{
				cout << "Некорректный размер массива." << endl;
				return 1;
			}
			cout << "Введите элементы массива:" << endl;
			for (int i = 0; i < size; ++i)
			{
				cout << "Элемент " << i + 1 << ": ";
				cin >> arr[i];
			}
			sort(arr, arr + size);
			int second_largest = arr[size - 2];
			cout << "Второй по величине элемент: " << second_largest << endl;
			break;
		}
	}
}

