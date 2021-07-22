#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//void init(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void my_print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d  ", arr[i]);
//	}
//	printf("\n");
//}
//void reverse(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0;i<=sz-1-i; i++)
//	{
//		int tmp = 0;
//		tmp = arr[i];
//		arr[i] = arr[sz - 1 - i];
//		arr[sz - 1 - i] = tmp;
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7 };
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	/*init(arr,sz);*/
//	my_print(arr, sz);
//	reverse(arr, sz);
//	my_print(arr, sz);
//
//	return 0;
//}
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5 };
//	int arr2[] = { 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int tmp = 0;
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5 };
//	short* p = (short*)arr;
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		*(p + i) = 0;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0x11223344;
//	char* pc = (char*)&a;
//	*pc = 0;
//	printf("%x\n", a);
//	return 0;
//}
//int i;
//int main()
//{
//	i--;
//	if (i > sizeof(i))
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//	return 0;
//}
//int count_bit_one(unsigned int n)
//{
//	int count = 0;
//	while (n>=1)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n=n / 2;
//	}
//	return count;
//}
//int count_bit_one(int n)
//{
//	int count = 0;
//	int i = 0;
//	int a = 1;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n>>i) & 1) == 1)
//		{
//			count++;
//		}
//
//	}
//	return count;
//}
//int count_bit_one(int n)
//{
//	int count = 0;
//	for (count; n != 0; n = n&(n - 1))
//	{
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int a = 1999;
//	int b = 2299;
//	int c = a^b;
//	//scanf("%d", &a);
//	int count=count_bit_one(c);
//	printf("count=%d\n", count);
//	system("pause");
//	return 0;
//}
//void print(int m)
//{
//	int i = 0;
//	printf("奇数位");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", ((m >> i) & 1));
//	}
//	printf("\n");
//	int b = 0;
//	printf("偶数位");
//	for (b = 31; b >= 1; b -= 2)
//	{
//		printf("%d ", ((m >> b) & 1));
//	}
//}
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	print(m);
//	return 0;
//}
//void jiaohuan(int* a, int* b)
//{
//	*b = (*a)^(*b);
//	*a = (*a)^(*b);
//	*b = (*a)^(*b);
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	printf("a=%d b=%d\n", a, b);
//	jiaohuan(&a, &b);
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}
//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = &arr;
//	print(p, sz);
//	return 0;
//}
//void chengfa(int a)
//{
//	int i = 0;//控制行数
//	for (i = 1; i <= a; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d * %d =%d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//
//
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	chengfa(a);
//	return 0;
//}