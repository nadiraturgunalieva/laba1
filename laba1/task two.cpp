/* Упражнение 02. Динамическая память в С++. Указатели
* 
* С - С++:
1) int *ptr = (int*)malloc(sizeof(int)) - int* ptr = new int
2) int *ptrArr = (int*)malloc(sizeof(int)*N) - int* ptrArr = new int[N]
3) free(ptr) - delete ptr
4) free(ptrArr) - delete[] ptrArr
В С++ необходимо ли освобождать динамическую память? 
- Да, динамическую память необходимо освобождать оператором delete

Можно ли освободить одну и ту же выделенную память дважды? 
- Нет, поскольку это приведет к неопределенному поведению программы и может вызвать ошибки выполнения программы

А можно ли освободить невыделенную память?
- Нет, нельзя. Это тоже приведет к ошибкам
* 
* 
*/

#include <iostream>

int main() {
	setlocale(LC_ALL, "Rus");
	int numRows;

	std::cout << "Введите количество строк треугольника Фибоначчи: ";
	std::cin >> numRows;

	//выделение памяти
	int** fibTriangle = new int* [numRows];

	//инициализация и заполнение
	for (int i = 0; i < numRows; i++) {
		fibTriangle[i] = new int[i + 1];
		int* currentRow = fibTriangle[i];

		currentRow[0] = currentRow[i] = 1; //первый и последний элемент каждой строки равен 1

		for (int j = 1; j < i; j++) {
			currentRow[j] = fibTriangle[i - 1][j - 1] + fibTriangle[i - 1][j];
		}

	}

	//вывод
	for (int = 0; i < numRows; i++) {
		for (int k = 0; k < numRows - i - 1; k++) {
			std::cout << " ";
		}

		int* currentRow = fibTriangle[i];

		for (int j = 0; j <= i; j++) {
			std::cout << currentRow[j] << " ";
		}
		std::cout << std::endl;
	}
	//освобождение
}