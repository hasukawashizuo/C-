#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	/*int a = 1;
//	int b = 2;*/
//	/*ADD(a, b);*/
//	//printf("%p\n", &ADD);
//	//printf("%p\n", ADD);// &函数名 和 函数名都是函数的地址
//	/*int arr[10] = { 0 };
//	int(*p)[10] = &arr;*/
//	int(*p)(int x, int y) = ADD;
//	printf("%d\n",(*p)(2, 3));
//	return 0;
//}
//void print(char*str)
//{
//	printf("%s\n", str);
//}
//int main()
//{
//	void(*p)(char*) = print;
//	(*p)("lololololl");
//	return 0;
//}
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int(*p)(int, int) = ADD;
//	printf("%d\n", (p)(2, 3));
//	printf("%d\n", (*p)(2, 3));
//	printf("%d\n", (**p)(2, 3));
//	printf("%d\n", (***p)(2, 3));
//	return 0;
//}
//int ADD(int x, int y)
//{
//	return x + y;
//}
//int SUB(int x, int y)
//{
//	return x - y;
//}
//int MUL(int x, int y)
//{
//	return x * y;
//}
//int DIV(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int(*parr[4])(int, int) = { ADD, SUB, MUL, DIV };//函数指针的数组
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", parr[i](4, 2));
//	}
//	return 0;
//}
char* my_strcpy(char* arr2, const char* arr1)
{
	int i = 0;
	for (i = 0; arr2[i] != '\0'; i++)
	{
		arr2[i] = arr1[i];
	}
}
int main()
{
	char arr1[] = ("nishishabi");
	char arr2[] = "";
	char*(*pf)(char*, const char*) = my_strcpy;
	char*(*pf)(arr2[], arr1[]);
	return 0;
}