// Sorting_2.02.16.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <stdio.h>
#include <tchar.h>
#include "math.h"
#include "conio.h"
#include "iostream"
#include "stdafx.h"

using namespace std;

int const n = 5;
int const m = 5;
void displayArray(int *a);
void displayLargeArray(int *b);

int _tmain(int argc, _TCHAR* argv[]) {
	// A array
	/*int n;
	cout << "ENTER SIZE" << endl;
	cin >> n;
	int* a=new int[n];*/

	int a[n];
	cout << "ENTER ELEMENTS" << endl;
	for (int i = 0; i < n; i++) cin >> a[i];

	cout << "YOU A MASSIV" << endl;
	//for (int i = 0; i < n; i++) cout << a[i] << " ";
	displayArray(a);
	cout << endl;

	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (a[j] > a[j + 1]) {
				int b = a[j]; //change for elements
				a[j] = a[j + 1];
				a[j + 1] = b;
			}
		}
	}

	cout << "YOU FINISHED A MASSIV" << endl;
	//for (int i = 0; i < n; i++) cout << a[i] << " ";
	//cout << endl;
	//cout << endl;
	displayArray(a);
	cout << endl;

	// B array

	/*int m, key, j;
	cout << "ENTER SIZE" << endl;
	cin >> m;
	int* b = new int[m];*/

	
	int b[m];
	int key, j;

	cout << "ENTER ELEMENTS" << endl;
	for (int i = 0; i < m; i++) cin >> b[i];

	cout << "YOU B MASSIV" << endl;
	//for (int i = 0; i < m; i++) cout << b[i] << " ";
	//cout << endl;
	displayArray(b);
	cout << endl;

	for (int i = 1; i < m; i++) {
		key = b[i];
		j = i - 1;
		while (j >= 0 && b[j] > key) {
			b[j + 1] = b[j];
			j = j - 1;
		}
		b[j + 1] = key;
	}

	cout << "YOU FINISHED B MASSIV" << endl;
	//for (int i = 0; i < m; i++) cout << b[i] << " ";
	//cout << endl;
	//cout << endl;
	displayArray(b);
	cout << endl;

	//C ARRAY
	int c[n + m];
	//int *c = new int[n + m];



	int i = 0;
	int g = 0;
	int l = 0;
	while (i < n && g < m) {
		if (a[i] < b[g]) {
			c[l] = a[i];
			i++;
		}
		else {
			c[l] = b[g];
			g++;
		}
		l++;
	}
	while (i < n) {
		c[l] = a[i];
		l++;
		i++;
	}

	while (g < m) {
		c[l] = b[g];
		l++;
		g++;
	}
	cout << "YOU FINISHED C MASSIV" << endl;
	//for (int i = 0; i < m + n; i++) cout << c[i] << " ";
	//cout << endl;
	displayLargeArray(c);
	cout << endl;

	system("pause");
	return 0;
}


void displayArray(int *a) {
	for (int i = 0; i < n; i++) cout << a[i]<< " ";
}
void displayLargeArray(int *c) {
	for (int i = 0; i < m + n; i++) cout << c[i] << " ";
}