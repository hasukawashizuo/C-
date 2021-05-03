#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include<stdlib.h>
#include<time.h>
//int main()
//{
//	int ret = 0;
//	int ch = 0;
//	char password[20] = { 0 };
//	printf("欧子鸣，请输入吃热狗密码:>");
//	scanf("%s", password);
//	while ((ch = getchar()) != '\n')
//	{
//             ;
//	}
//	printf("请确认(Y/N):>");
//	ret = getchar();
//	if (ret =='Y')
//	{
//		printf("尼尔热狗一份");
//	}
//	else
//	{
//		printf("和毅去捞");
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	while ((a = getchar()) != EOF)
//	{
//		if (a<'0' || a>'9')
//			continue;
//		putchar(a);
//
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//		printf("%d\n", i);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i = 5)
//			printf("neal\n");
//		printf("欧仔\n");
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	for (;;)
//	{
//		printf("sb");
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i=0; i < 10; i++)
//	{
//		for (j=0; j < 10; j++)
//		{
//			printf("caosini\n");
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int n = 0;
//	int s = 1;
//	printf("neal,请输入草欧的次数:>");
//	scanf("%d", &n);
//	for (a = 1; a <=n; a++)
//	{
//		 s = a*s;
//	}
//	printf("%d\n", s);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int sb = 0;
//	for (a = 1; a <= 10; a++)
//	{
//		int s = 1;
//		for (b = 1; b <= a; b++)
//		{
//			s = b*s;
//		}
//		sb = sb + s;
//	}
//	printf("%d\n", sb);
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i <= sz; i++)
//	{
//		if (k==arr[i])
//		{
//			printf("%d\n", arr[i]);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6,7,8, 9, 10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	int mid =0;
//	for (mid = 4; left<=right; mid = (left + right) / 2)
//	{
//		if (arr[mid] <k )
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		} 
//		else if (arr[mid] = k)
//		{
//			printf("找到了，下标是%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("zhaobudao");
//	}
//	return 0;
//}
//int main()
//{
//	char arr1[] = "caonima";
//	char arr2[] = "#######";
//	int left = 0;
//	//int right = sizeof(arr1)/sizeof(arr1[0])-2;
//	int right = strlen(arr1)-1;
//	for (left = 0, right = strlen(arr1) - 1; left <= right; left++, right--)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");
//	}
//	return 0;
//}
//int main()
//{
//	char password[20] = { 0 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入男同密码:>");
//		scanf("%s", password);
//		if (strcmp(password,"0")==0)
//		{
//			printf("草你吗，输入正确\n");
//			break;
//		}
//		else
//		{
//			printf("草你吗，再来一次\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("死远点\n");
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("请输入三个数字:>");
//	scanf("%d%d%d", &a, &b, &c);
//	while (a < b || a < c || b < c)
//	{
//		if (a < b)
//		{
//			int tmp = 0;
//			tmp = a;
//			a = b;
//			b = tmp;
//			if (b < c)
//			{
//				int sb = 0;
//				sb = b;
//				b = c;
//				c = sb;
//			}
//		}
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	for (a = 1; a <= 100; a++)
//	{
//		if ((b = a % 3) == 0)
//		{
//			printf("%d ", a);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int i = 0;
//	scanf("%d%d", &a, &b);
//	int s = min(a, b);
//	for (i =s ;; i--)
//	{
//		if (a%i == 0 && b%i == 0)
//		{
//			printf("最大公约数为%d\n", i);
//			break;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (i % 4 == 0 && i % 100 != 0)
//		{
//			printf("%d ", i);
//		}
//		else if (i % 400 == 0)
//		{
//			printf("%d ",i);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	for (a = 100; a <= 200; a++)//a代表从100到200
//	{
//		for (b = 2; b <= a; b++)//b用来测试a是否为素数
//		{
//			if (a%b == 0)//不是素数
//			{
//				break;//回到a的循环
//			}
//			else if (b == a)
//			{
//				printf("%d ", a);
//			}
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int count = 0;
//	for (a = 0; a <= 9; a++)
//	{
//		for (b = 0; b <= 10; b++)
//		{
//			int s = 10 * a + b;
//			if (b == 10)
//			{
//				break;
//			}
//			else if (b == 9 && b != a)
//			{
//				printf("%d ",s);
//				count++;
//			}
//		}
//		if (a==9)
//		{
//			int c = 0;
//			while (c <9)
//			{
//				int s = 10 * a + c;
//				
//				printf("%d ", s);
//				c++;
//				count++;
//				if (c == a)
//				{
//					int s = 10 * a + c;
//					printf("%d ", s);
//					count += 2;
//					break;
//				}
//			}
//		}
//	}
//	printf("%d ", count);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("%d", count);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	double sum = 0.0;
//	for (a = 1; a <= 100; a++)
//	{
//		if (a % 2 == 0)
//		{
//			sum = sum - 1.0/a;
//		}
//		else  if (a % 2 == 1)
//		{
//			sum = sum + 1.0/a;
//		}
//	}
//	printf("sum=%lf\n", sum);
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int tmp = 0;
//	for (i =1; i<=sz; i++)
//	{
//		if (i == sz)
//		{
//			break;
//		}
//		if (arr[i] < arr[i + 1])
//		{
//			tmp = arr[i + 1];
//		}
//		else
//		{
//			tmp = arr[i];
//		}
//	}
//	printf("%d\n",tmp);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int z = 0;
//	for (i = 1; i < 10; i++)
//	{
//		int j = 0;
//		for (j = 1; j <=i; j++)
//		{
//			z = i*j;
//			printf("%d*%d=%2d  ", j, i, z);
//			if (j == i)
//			{
//				printf("\n");
//			}
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	int key = 7;
//	int mid = (left + right) / 2;
//	while (left <= right)
//	if
//
//	return 0;
//}
void menu()
{
	printf("**********************\n");
	printf("***1.玩   0.滚********\n");
	printf("**********************\n");
}
void game()
{
	int ret = 0;
	int guess = 0;
	ret = rand()% 100 + 1;
	while (1)
	{
		printf("输快点>:");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("哈哈啥比，猜大了\n");
		}
		if (guess < ret)
		{
			printf("哈哈弱智，猜小了\n");
		}
		if (guess == ret)
		{
			printf("草你吗，猜对了\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//时间戳来设置随机数
	do
	{
		menu();
		printf("请选择>:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("滚啊\n");
			break;
		default:
			printf("不识字？\n");
			break;
		}
	} while (input);
	return 0;
}
//int main()
//{
//	int a = 0;//控制空格数量
//	int b = 0;//控制*数量
//	int h = 0;//控制行数
//	int input = 0;
//	printf("请输入行数>:");
//	scanf("%d", &input);
//	for (h = 1; h <= input; h++)
//	{
//		for (a = 1; a <=input - h; a++)
//		{
//			printf(" ");
//		}
//			printf("*");
//		for (b = 1; b <= h - 1; b++)
//		{
//			printf("**");
//		}
//			printf("\n");
//	}
//	for (h = input+1; h <= 2 * input - 1; h++)
//	{
//		for (a = 1; a <= h - input; a++)
//		{
//			printf(" ");
//		}
//		    printf("*");
//		for (b = 1; b <= 2 * input - 1 - h;b++)
//		{
//			printf("**");
//		}
//		    printf("\n");
//	}
//
//	return 0;
//}