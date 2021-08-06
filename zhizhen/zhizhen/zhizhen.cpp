#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//int main()
//{
//	/*printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(double*));*/
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = (char*)&a;
//	printf("%p\n", pa);
//	printf("%p\n", pc);
//	return 0;
//}
int my_strlen(char* str)
{
	char* start = str;
	char* end = str;
	while (*end != '\0')
	{
		end++;
	}
	return end - start;
}
int main()
{
	/*int a = 0x11223344;
	int* pa = &a;
	char* pc = (char*)&a;
	printf("%p\n", pa);
	printf("%p\n", pa+1);

	printf("%p\n", pc);
	printf("%p\n", pc+1);
*/
	//int arr[10] = { 0 };
	///*int* p = arr;*/
	//char* pc = (char*)arr;
	//int i = 0;
	//for (i = 0; i < 10; i++)
	//{
	//	*(pc + i) = 1;

	//}
	//int* p = NULL;//暂时不知道赋什么值时，使用NULL=(void* )0
	/*int a = 10;
	int* p = &a;
	*p = 20;*/
	//p = NULL;//指针使用完毕后初始化，防止成为野指针
	//int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	/*int i = 0;
	int* p = arr;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", *p);
		p = p + 1;
	}*/
	/*char arr[] = "bit";
	int len = my_strlen(arr);
	printf("%d\n", len);*/
	/*int arr[10] = { 0 };
	int i = 0;
	int* p = arr;
	for (i = 0; i < 10; i++)
	{
		*(p + i) = i;
		printf("\n");
		printf("%d", arr[i]);
	}*/
	int a = 10;
	int b = 20;
	int c = 30;
	int* arr[3] = { &a, &b, &c };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d ", *(arr[i]));
	}
	return 0;
}