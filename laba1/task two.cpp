/* ���������� 02. ������������ ������ � �++. ���������
* 
* � - �++:
1) int *ptr = (int*)malloc(sizeof(int)) - int* ptr = new int
2) int *ptrArr = (int*)malloc(sizeof(int)*N) - int* ptrArr = new int[N]
3) free(ptr) - delete ptr
4) free(ptrArr) - delete[] ptrArr
� �++ ���������� �� ����������� ������������ ������? 
- ��, ������������ ������ ���������� ����������� ���������� delete

����� �� ���������� ���� � �� �� ���������� ������ ������? 
- ���, ��������� ��� �������� � ��������������� ��������� ��������� � ����� ������� ������ ���������� ���������

� ����� �� ���������� ������������ ������?
- ���, ������. ��� ���� �������� � �������
* 
* 
*/

#include <iostream>

int main() {
	setlocale(LC_ALL, "Rus");
	int numRows;

	std::cout << "������� ���������� ����� ������������ ���������: ";
	std::cin >> numRows;

	//��������� ������
	int** fibTriangle = new int* [numRows];

	//������������� � ����������
	for (int i = 0; i < numRows; i++) {
		fibTriangle[i] = new int[i + 1];
		int* currentRow = fibTriangle[i];

		currentRow[0] = currentRow[i] = 1; //������ � ��������� ������� ������ ������ ����� 1

		for (int j = 1; j < i; j++) {
			currentRow[j] = fibTriangle[i - 1][j - 1] + fibTriangle[i - 1][j];
		}

	}

	//�����
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
	//������������
}