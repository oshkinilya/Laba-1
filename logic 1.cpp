#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <malloc.h>
#include <string.h>
#include <windows.h>

//int main(void)
//{
//	int temp, max = 0, min = 1000;
//	int a[10];
//	srand(time(NULL));
//	for (int i = 0;i < 10;i++) {
//		a[i] = rand()%100;
//		if (a[i] > max) {
//			max = a[i];
//		}
//		if (a[i] < min) {
//			min = a[i];
//		}
//		printf("%d\n", a[i]);
//	}
//	temp = max - min;
//	printf("max-min = %d", temp);
//}


//
//int main(void){
//	int n;
//	int* a;
//	printf("Print size: \n");
//	scanf_s("%d", &n);
//	a = (int*)malloc(n * sizeof(int));
//	srand(time(NULL));
//	for (int i = 0;i < n;i++) {
//			a[i] = rand()%100+1;
//			printf("%d ", a[i]);
//		}
//	}


//int main(void) {
//	int a[4][4];
//	int k = 0;
//	int b[4];
//	srand(time(NULL));
//	for (int i = 0;i < 4;i++) {
//		for (int j = 0;j < 4;j++) {
//			a[i][j] = rand() % 100 + 1;
//			k += a[i][j];
//			printf("%d ", a[i][j]);
//		}
//		printf("\n");
//		b[i] = k;
//		k = 0;
//	}
//	printf("\n");
//	for (int i = 0;i < 4;i++) {
//		printf("%d ", b[i]);
//	}
//}



int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int n = 1;
	int select = 0;
	char filtr[16];
	int filtnum;
	typedef struct
	{
		char famil[16], name[16], facult[16];
		int Nomzach;
	} univ;
	printf("Print student's sum: ");
	scanf_s("%d", &n);
	univ stud[50];
	for (int i = 0; i < n; i++)
	{
		printf("\n\n%d.", (i + 1));
		printf("\nPrint second name: ");
		scanf("%s", stud[i].famil);

		printf("\nPrint name: ");
		scanf("%s", stud[i].name);

		printf("\nPrint faculty name: ");
		scanf("%s", stud[i].facult);

		printf("\nPrint student record-book number: ");
		scanf_s("%d", &stud[i].Nomzach);
	}
	printf("\nStudent's : ");
	for (int i = 0; i < n; i++)
	{
		printf("\n%d) %s %s %s %d", (i + 1), stud[i].famil, stud[i].name, stud[i].facult, stud[i].Nomzach);

	}
	printf("\n\nSelect\n1.second name\n2.name\n3.facult name\n4.student record-book number\n ");
	scanf_s("%d", &select);
	switch (select) {
	case(1):
		printf("Print second name: ");
		scanf("%s", filtr);
		for (int i = 0; i < n; i++) {
			if (strcmp(filtr, stud[i].famil) == 0) {
				printf("\n%d) %s %s %s %d", (i + 1), stud[i].famil, stud[i].name, stud[i].facult, stud[i].Nomzach);
			}
		}
		break;
	case(2):
		printf("Print name: ");
		scanf("%s", filtr);
		for (int i = 0; i < n; i++) {
			if (strcmp(filtr, stud[i].name) == 0) {
				printf("\n%d) %s %s %s %d", (i + 1), stud[i].famil, stud[i].name, stud[i].facult, stud[i].Nomzach);
			}
		}
		break;
	case(3):
		printf("Print facult name: ");
		scanf("%s", filtr);
		for (int i = 0; i < n; i++) {
			if (strcmp(filtr, stud[i].facult) == 0) {
				printf("\n%d) %s %s %s %d", (i + 1), stud[i].famil, stud[i].name, stud[i].facult, stud[i].Nomzach);
			}
		}
		break;
	case(4):
		printf("Print record-book number: ");
		scanf_s("%d", &filtnum);
		for (int i = 0; i < n; i++) {
			if (filtnum == stud[i].Nomzach) {
				printf("\n%d) %s %s %s %d", (i + 1), stud[i].famil, stud[i].name, stud[i].facult, stud[i].Nomzach);
			}
		}
		break;
	default:
		printf("Incorrect numb!");
		break;
	}
}