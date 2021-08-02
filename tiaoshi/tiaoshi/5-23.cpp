#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d  ", i);
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int a = 0;
//	for (i = 1; i <=3; i++)
//	{
//		
//		int s = 1;
//		for (a = 1; a <= i; a++)
//		{
//			s = a*s;
//		}
//		j = s + j;
//	}
//	printf("%d\n", j);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	printf("%p\n", arr);
//	printf("%p\n", &i);
//	/*for (i = 0; i <= 12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}*/
//	return 0;
//}
//void mystrcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		*dest++;
//		*src++;
//	}
//	*dest = *src;
//}
//void mystrcpy(char* dest, char* src)
//{
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	*dest = *src;
//}
//int main()
//{
//	char arr1[] = "***********";
//	char arr2[] = "shabi";
//	mystrcpy(arr1, arr2);
//	printf("%s\n", arr2);
//	return 0;
//}
//int main()
//{
//	const int num = 10;
//	const int* p = &num;
//	*p = 20;//err
//	printf("%d\n", num);
//	return 0;
//}
int mystrlen(char* arr)
{
	int count = 0;
	while (*arr++ != '\0')
	{
		count++;
	}
	return count;
}
int main()
{
	char arr[] = "abcfd";
	mystrlen(arr);
	printf("%d\n", mystrlen(arr));
	return 0;
}