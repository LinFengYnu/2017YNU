// ConsoleApplication13.cpp : 定义控制台应用程序的入口点。
//
#include "stdlib.h"
#include "stdafx.h"
#include "iostream"
#include "time.h"
using namespace std;
void sort(int a[], int n)
{
	int i, j, k, temp;
	for (i = 0; i<n; i++) {
		k = 1;
		for (j = 0; j<n - i - 1; j++) {
			if (a[j]>a[j + 1]) {
				k = 0;
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
		if (k) break;
	}
}
int main(void)
{
	clock_t start, finish;
	double totaltime;
	start = clock();
	int a[10000], i;
	srand( time(NULL));
	for (i = 0; i < 10000; i++) {
		a[i] = rand() % 10000;
		printf("%d ", a[i]);
	}
	putchar('\n');
	sort(a, 10000);
	for (i = 0; i < 10000; i++) printf("%d ", a[i]);
	putchar('\n');
	finish = clock();
	totaltime = (double)(finish - start) / CLOCKS_PER_SEC;
	cout << "Time:" << totaltime << "sec" << endl;
	return 0;
}
