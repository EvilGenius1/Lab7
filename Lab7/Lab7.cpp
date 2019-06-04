// Lab7.cpp : This file contains the 'main' function. Program execution begins and ends there.

//#include "stdafx.h" 
#include <iostream> 
#include <string> 
#include <stdio.h> 
#include <queue> 


using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	queue <string> q; 
	int m;
	string a;
	
	q.push("one");
	q.push("two");
	q.push("three");
	q.push("four");
	
	cout << "Удаляются 2 первых элемента" << endl;
	for (int i = 0; i < 2; i++)
		q.pop();
	 
	cout << "Количество новых элементов: ";
	cin >> m;
	for (int h = 0; h < m; h++) {
		cin >> a;
		q.push(a);  
	}

	cout << "Очередь после изменений: " << endl;
	while (!q.empty()) {
		cout << q.front() << " ";
		q.pop();
	}

	system("pause");
	return 0;
}