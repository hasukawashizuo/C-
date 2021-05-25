#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<math.h>
//int add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}
//int main()
//{
//	char arr1[] = "88888888";
//	char arr2[20] = "bit";
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}
//int main()
//{
//	char arr1[] = "caonima";
//	memset(arr1, '*', 4);
//	printf("%s\n", arr1);
//	return 0;
//}
//int get_max(int x, int y)
//{
//	if (x > y)
//	{
//		return x;
//	}
//	else
//		return y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);
//	printf("max=%d\n", max);
//	return 0;
//}
//void Swap1(int x, int y)//void的意思是这个函数没有返回值
//{
//	int tmp = 0;
//	x = tmp;
//	x = y;
//	y = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d,b=%d", a, b);
//	Swap1(a, b);
//	printf("a=%d,b=%d", a, b);
//	return 0;//并不能实现交换
//}
//void swap2(int* pa, int* pb)
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	swap2(&a, &b);
//	printf("a=%d,b=%d", a, b);
//	return 0;
//}
//void sushu(int x)
//{
//	int b = 0;
//	for (b = 2; b < x; b++)
//	{
//		if (0 == x%b)
//		{
//			printf("不是素数");
//			break;
//		}
//	}
//	if (b == x)
//	{
//		printf("是");
//	}
//}
//int main()
//{
//	int a = 0;
//	printf("请输入数字>:");
//	scanf("%d", &a);
//	sushu(a);
//	return 0;
//}
//int is_prime(int n)
//{
//	int b = 0;
//	int z = 0;
//	for (b = 2; b < n; b++)
//	{
//		if (0 == n%b)
//		{
//			break;
//		}
//	}
//	if (b == n)
//	{
//
//	}
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//		printf("%d", n % 10);
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}
//int str(char* pn)
//{
//	int count = 0;
//	while ((*pn) != '\0')
//	{
//		count++;
//		pn++;
//	}
//	return count;
//}
//int str(char* pn)
//{
//	int count = 0;
//	if (*pn != '\0')
//	{
//		return 1 + str(pn + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	char arr[] = "fuck";
//	int len=str(arr);//arr是数组，数组传参传的不是整个数组，而是第一个元素的地址
//	printf("len=%d", len);
//	return 0;
//}
//int fac1(int n)
//{
//	if (n > 0)
//		return n*fac1(n - 1);
//	else
//		return 1;
//}
//int main()
//{
//	int input = 0;
//	int s = 0;
//	scanf("%d", &input);
//	s = fac1(input);
//	printf("%d", s);
//	return 0;
//}
//int fib1(int n)
//{
//	if (n > 2)
//		return fib1(n - 1) + fib1(n - 2);
//	else
//		return 1;
//}
//int fib2(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()//描述第n个斐波那契数
//{
//	int n = 0;
//	int s = 0;
//	scanf("%d", &n);
//	s = fib2(n);
//	printf("%d", s);
//	return 0;
//}
//int han(int n)
//{
//	if (n > 3)
//	{
//		return 2 * han(n - 1) + 1;
//	}
//	else
//	{
//		return (int)pow(2,n) - 1;
//	}
//}
//int main()
//{
//	int input = 0;
//	scanf("%d", &input);
//	int s = han(input);
//	printf("%d", s);
//	return 0;
//}
//int sb(int n)
//{
//	if (n >= 3)
//	{
//		return sb(n - 1) + sb(n - 2);
//	}
//	if (n == 2)
//	{
//		return 2;
//	}
//	if (n == 1)
//	{
//		return 1;
//	}
//}
//int main()
//{
//	int input = 0;
//	scanf("%d", &input);
//	int s = sb(input);
//	printf("%d", s);
//	return 0;
//}