#include <iostream>
#include <istream>
#include <string>
#include <stdexcept>
#include <windows.h>  
#include "Lesson.h"

using namespace std;

int Client::clientCounter = 0;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Client A, B;
	cout<< "\t\tДемонстрация статического метода и переменной" << endl;
	cout << "Кол-во клиентов: " << Client::getClientCounter() << endl;
	A.Input();
	A.Print();


	cout << endl << "Кол-во пройденных уроков первого клиента до приминения оператора перегрузки '+': " << A.Getcompless();
	A = A + 3;
	cout << endl << "Кол-во после: " << A.Getcompless();



	cout << endl << endl << "Тест перегрузки '++'(Постфикс): " << endl;
	B = A++;
	cout << "Кол-во уроков у нового клиента: " << B.Getcompless();
	cout << endl << "Кол-во у первого: " << A.Getcompless();

	cout << endl << endl << "Тест перегрузки '++'(Префикс): " << endl;
	B= ++A;
	cout << "Кол-во уроков у нового клиента: " << B.Getcompless();
	cout << endl << "Кол-во у первого: " << A.Getcompless();

	int totalless;
	int totallessWithPointer = A.GettotallessWithPointer(&totalless);
	cout << endl << endl << "Возвращение кол-ва пройденных уроков первого клиента через указатель: " << totallessWithPointer << endl;
	int& totallessWithReference = A.GettotallessWithReference();
	cout << "Возвращение кол-ва пройденных уроков первого клиета через ссылку: " << totallessWithReference << endl;

}