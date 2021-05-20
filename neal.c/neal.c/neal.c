#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
////int Max(int x, int y)
////{
////	if (x > y)
////		return x;
////	else
////		return y;
////
////}
//int main()
//{
//	///*char ch[10] = "hello s     bit";*/
//	//int a = 0;
//	//int b = 0;
//	//printf("请输入两个数字>:");
//	//scanf("%d %d", &a, &b);
//	//while (a > b)
//	//{
//	//	printf("较大的数为%d\n", a);
//	//}
//	//printf("较大的数为%d\n",b);
//	//return 0;
//	/*int a = 10;
//	int b = 20;
//	int max = 0;
//	max = Max(a, b);
//	printf("%d\n", max);
//	return 0;*/
//	/*int a = 10;
//	int arr[] = { 1, 2, 3, 4, 5, 6 };
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof a);
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));
//	return 0;*/
//	//int a = 0;//4个字节，32个bite  00000000000000000000000000000000  32个0
//	//int b = ~a;//按位取反          11111111111111111111111111111111
//	//printf("%d\n", b);
//	//return 0;
//	//int a = 10;
//	////int b = a++;
//	//int b = ++a;
//	//printf("a=%d b=%d\n", a, b);
//	//return 0;
//	/*int a = 3;
//	int b = 5;
//	int c = a&&b;
//	printf("%d\n", c);
//	return 0;*/
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max=(a > b ? a : b);
//	printf("%d\n", max);
//	return 0;
//}
//int Add(int x, int y)
//{
//	int z = x + y;
//	 return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);
//	printf("%d\n", c);
//	return 0;
//}
//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d\n", a);
//}
//int main()
//{
//	int i= 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
//#define MAX(X,Y) (X>Y?X:Y)
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = MAX(a, b);
//	printf("%d\n", max);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int*p = &a;
//	*p = 20;
//	printf("%d\n", a);
//	return 0;
//}
//int main()
//{
//	char ch = 'a';
//	char*pc = &ch;
//	*pc = 'w';
//	printf("%d\n", sizeof(pc));
//	return 0;
//}
//int sum(int a)
//{
//	int c = 0;
//	static int b = 3;
//	c += 1;
//	b += 2;
//	return(a + b + c);
//}
//int main()
//{
//	int i = 0;
//	int a = 2;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d\n", sum(a));
//	}
//	return 0;
//}
//int main()
//{
//	double a = 3.141;
//	double*sb = &a;
//	*sb = 3.5;
//	printf("%lf\n", a);
//	return 0;
//}
struct book
{
	char name[20];
	short price;
};
int main()
{
	struct book b = { "基佬修炼手册", 5 };
	printf("%s\n", b.name);
	struct book* sb = &b;
	sb->price = 6;
	strcpy(b.name, "欧仔修炼手册");
	printf("%s\n", sb->name);
	printf("%d\n", (*sb).price);
	printf("%d\n", sb->price);
	return 0;
}