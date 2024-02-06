// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#define _CRT_SECURE_NO_WARNINGS
#define _UNICODE
#include <windows.h>
#include <tchar.h>
#include <iostream>
using namespace std;

void removeSym6(_TCHAR* str, int pos) {
	int length = _tcslen(str);

	if ((pos >= 0) && (pos < length)) {
		_tcscpy_s(str + pos, length - pos, str + pos + 1);
	}
	else {
		cout << "Wrong position!" << endl;
	}
}
void removeSym7(_TCHAR* str, int sym) {
	int length = _tcslen(str);
	for (int i = 0; i < length; i++) {
		if (str[i] == sym) {
			_tcscpy_s(str + i, length - i, str + i + 1);
		}
	}
	
	
}
void addSym(_TCHAR* str, _TCHAR sym, int pos) {
	int length = _tcslen(str);
	if ((pos >= 0) && (pos < length)) {
		for (int i = length; i > pos; --i) {
			str[i] = str[i - 1];
		}

		
		str[pos] = sym;
	}
	


}
int main()
{
	//task1
	
	//_TCHAR str1[34] = _TEXT("gdhdg hhfhfh jfh ffh hf");
	//wcout << str1 << endl;
	//int count = _tcslen(str1);
	//for (int i = 0; i < count; i++) {
	//	if (str1[i] == ' ') {
	//		str1[i] = '\t';
	//	}
	//}

	//wcout << str1;





	//task2



	//_TCHAR str1[40] = _TEXT("gd2227854hdg hhfhfh43 jfh ffh%^ hf##*$");
	//int numbers = 0;
	//int letters = 0;
	//int symbols = 0;
	//int count = _tcslen(str1);
	//for (int i = 0; i < count; i++) {
	//	if ((str1[i] >= 48) && (str1[i] <= 57)) {
	//		numbers++;
	//	}
	//	else if (((str1[i] >= 65) && (str1[i] <= 90)) || ((str1[i] >= 97) && (str1[i] <= 122))) {
	//		letters++;
	//	}
	//	else if (((str1[i] >= 33) && (str1[i] <= 47)) || ((str1[i] >= 58) && (str1[i] <= 64)) || ((str1[i] >= 91) && (str1[i] <= 96)) || ((str1[i] >= 123) && (str1[i] <= 126))) {
	//		symbols++;
	//	}
	//}
	//cout << numbers << endl;
	//cout << letters << endl;
	//cout << symbols << endl;


	//task3

	/*_TCHAR str1[40] = _TEXT("gd2227854hdg hhfhfh43 jfh ffh%^ hf##*$");
	int count = _tcslen(str1);
	int words = 0;
	for (int i = 1; i < count; i++) {
		if ((str1[i] == ' ') && (str1[i - 1] != ' '))
			words++;
	}
	if (str1[count - 1] != ' ') {
		words++;
	}
	cout << words << endl;*/

	//task4


	/*_TCHAR buff[50];
	wcin >>(buff);
	wcout << buff << endl;
	int vowels = 0;
	int count = _tcslen(buff);
	for (int i = 0; i < count; i++) {
		if ((buff[i] == 65) || (buff[i] == 69) || (buff[i] == 73) || (buff[i] == 79) || (buff[i] == 85) || (buff[i] == 89) || (buff[i] == 97) || (buff[i] == 101) || (buff[i] == 105) || (buff[i] == 111) || (buff[i] == 117) || (buff[i] == 121)) {
			vowels++;
		}
	}
	cout << vowels << endl;*/


	//task5



	/*_TCHAR str1[40] = _TEXT("goog");
	int count = _tcslen(str1);
	int end = count-1;
	bool isOk = true;
	for (int i = 0; i < count-1; i++) {
		if (str1[i] == str1[end]) {
			end--;
		}
		else {
			isOk = false;
			break;
		}
	}
	if (isOk) {
		cout << "Its Palindrom!" << endl;
	}
	else {
		cout << "Its not Palindrom!" << endl;
	}*/


	//task6

	/*_TCHAR str1[40] = _TEXT("gd2227854hdg hhfhfh43 jfh ffh%^ hf##*$");
	removeSym(str1, 5);
	wcout << str1;*/


//task 7

//_TCHAR str1[40] = _TEXT("gd2227854hdg hhfhfh43 jfh ffh%^ hf##*$");
//char symbol;
//cin>>symbol;
//removeSym7(str1, symbol);
//wcout << str1;



//task8

_TCHAR str1[70] = _TEXT("gd2227854hdg hhfhfh43 jfh ffh%^ hf##*$");
_TCHAR symbol;
wcin >> symbol;
int pos;
cin >> pos;
addSym(str1, symbol, pos);
wcout << str1;
}


// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
