#define _CRT_SECURE_NO_WARNINGS 1
#include <string.h>
#include<stdio.h>
//int main()
//{
//	while (1)
//	{
//		printf("请输入牛子长度>:\n");
//		int n = 0;
//		scanf("%d", &n);
//		if (n < 10)
//		{//if，else控制多条语句要用{}
//			printf("就这啊\n");
//			printf("去当骚0\n");
//		}
//		else if (n >= 10 && n < 18)
//			printf("欧仔勉强能用\n");
//		else
//			printf("就在那里撒谎好了\n");
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 2)
//			printf("啥比");
//	}
//else
//			printf("狗狗");
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int s = 0;
//	printf("输入一个数字>:");
//	scanf("%d", &a);
//	s = a % 2;
//	if (s == 1)
//	{
//		printf("a是奇数");
//	}
//	else
//	{
//		printf("a是偶数");
//	}
//	return 0;
//}
//int main()
//{
//	int a = 1;
//	int s = 0;
//	while (a <= 100)
//	{
//		s = a % 2;
//		if (s == 1)
//		{
//			printf("%d\n", a);
//		}
//		a++;
//	}
//	return 0;
//}
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("1\n");
//		break;
//	case 2:
//		printf("2\n");
//		break;
//	case 3:
//		printf("cao si ni\n");
//		break;
//	}
//	return 0;
//}
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		m++;
//	case 2:
//		n++;
//	case 3:
//		switch (n)
//		{
//		case 1:
//			n++;
//		case 2:
//			m++;
//			n++;
//			break;
//		}
//	case 4:
//		m++;
//		break;
//	defult:
//		break;
//	}
//	printf("m=%d,n=%d", m, n);
//	return 0;
//}
//int main()
//{
//	int a = 1;
//	while (a <= 10)
//	{
//		if (a == 5)
//			continue;
//		printf("%d\n", a);
//		a++;
//	}
//	return 0;
//}
//int main()
//{
//	int ch = 0;
//	while ((ch=getchar())!= EOF);
//	putchar(ch);
//	return 0;
//}
int main()
{
	int ch = getchar();
	while (ch != EOF)
		putchar(ch);
	return 0;
}