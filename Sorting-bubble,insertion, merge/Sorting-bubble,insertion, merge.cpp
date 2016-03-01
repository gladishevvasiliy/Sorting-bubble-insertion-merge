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

void displayArray(int a[], int n);
void inputArray(int a[], int n);

int _tmain(int argc, _TCHAR* argv[]) {

	int const n = 5;
	int const m = 5;

	int a[n];
	cout << "ENTER ELEMENTS" << endl;
	//for (int i = 0; i < n; i++) cin >> a[i];
	inputArray(a, n);

	cout << "YOU A MASSIV" << endl;
	displayArray(a, n);
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
	displayArray(a, n);
	cout << endl;

	
	int b[m];
	int key, j;

	cout << "ENTER ELEMENTS" << endl;
	//for (int i = 0; i < m; i++) cin >> b[i];
	inputArray(b, m);

	cout << "YOU B MASSIV" << endl;
	displayArray(b, m);
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
	displayArray(b, m);
	cout << endl;

	//C ARRAY
	int c[n + m];
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
	displayArray(c, n+m);
	cout << endl;

	system("pause");
	return 0;
}


void displayArray(int a[], int n) {
	for (int i = 0; i < n; i++) cout << a[i]<< " ";
}

void inputArray(int a[],int n) {
	for (int i = 0; i < n; i++) /*cin << a[i] << " "*/ scanf_s("%i", &a[i]);
}