// Pr4_Graf.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void removeElements(vector<int>& arr, int B) {
	int i = 0;
	while (i < arr.size()) {
		if (arr[i] < B) {
			arr.erase(arr.begin() + i);
		}
		else {
			i++;
		}
	}
}

const int MAX_SIZE = 40;


int main()
{
	setlocale(0, "");
	int programNumber;
	cout << "Введите номер программы (от 1 до 6): " << endl;
	cin >> programNumber;
	switch (programNumber) {
		case 1:
		{
			int A[40];
			int p;

			// Ввод размера массива
			cout << "Введите размер массива (p < 40): ";
			cin >> p;

			// Ввод элементов массива
			cout << "Введите элементы массива: ";
			for (int i = 0; i < p; ++i) {
				cin >> A[i];
			}

			// Подсчет среднего арифметического положительных элементов, кратных трем
			int sum = 0;
			int count = 0;
			for (int i = 0; i < p; ++i) {
				if (A[i] > 0 && A[i] % 3 == 0) {
					sum += A[i];
					count++;
				}
			}
			// Проверка наличия положительных элементов, кратных трем
			if (count > 0) {
				double average = static_cast<double>(sum) / count;
				std::cout << "Среднее арифметическое положительных элементов, кратных трем: " << average << std::endl;
			}
			else {
				std::cout << "В массиве нет положительных элементов, кратных трем." << std::endl;
			}

			break;

		}
		case 2:
		{
			int p;
			cout << "Введите размер массива (p < 10): ";
			cin >> p;

			if (p >= 10 || p <= 0) {
				cout << "Размер массива должен быть меньше 10 и больше 0." << endl;
				return 1;
			}

			vector<int> A(p);
			cout << "Введите элементы массива: ";
			for (int i = 0; i < p; ++i) {
				cin >> A[i];
			}

			int B;
			cout << "Введите значение B: ";
			cin >> B;

			removeElements(A, B);

			cout << "Массив после удаления элементов меньших " << B << ": ";
			for (int num : A) {
				cout << num << " ";
			}
			cout << endl;

			return 0;

		}
		case 3:
		{
			int A[MAX_SIZE], B[MAX_SIZE], n, bIndex = 0;

			// Ввод размера массива A
			cout << "Введите размер массива A (n < 40): ";
			cin >> n;

			// Ввод элементов массива A
			cout << "Введите элементы массива A:\n";
			for (int i = 0; i < n; ++i) {
				cin >> A[i];
			}

			// Формирование массива B
			for (int i = 0; i < n; ++i) {
				if (A[i] > 0) {
					B[bIndex] = A[i];
					++bIndex;
				}
			}

			// Вывод массива B
			cout << "Массив B, содержащий только положительные элементы массива A:\n";
			for (int i = 0; i < bIndex; ++i) {
				cout << B[i] << " ";
			}
			cout << endl;
			break;
		}
		case 4:
		{
			int A[MAX_SIZE], n;

			// Ввод размера массива A
			cout << "Введите размер массива A (n < 40): ";
			cin >> n;

			// Ввод элементов массива A
			cout << "Введите элементы массива A:\n";
			for (int i = 0; i < n; ++i) {
				cin >> A[i];
			}

			// Определение первого отрицательного элемента
			int firstNegativeIndex = -1;
			for (int i = 0; i < n; ++i) {
				if (A[i] < 0) {
					firstNegativeIndex = i;
					break;
				}
			}

			// Вывод результата
			if (firstNegativeIndex != -1) {
				cout << "Первый отрицательный элемент находится в позиции: " << firstNegativeIndex << endl;
				cout << "Значение: " << A[firstNegativeIndex] << endl;
			}
			else {
				cout << "В массиве нет отрицательных элементов." << endl;
			}

			break;

		}
		case 5: {
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
		case 6:
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

