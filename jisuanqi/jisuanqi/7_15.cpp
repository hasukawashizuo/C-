#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void menu()
{
	printf("**********************\n");
	printf("****1.add    2.sub****\n");
	printf("****3.mul    4.div****\n");
	printf("******0.exit**********\n");
}
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int(*pfArr[5])(int, int) = { 0, Add, Sub, Mul, Div };
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("���������:>");
//			scanf("%d%d", &x, &y);
//			int ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("�˳�\n");
//		}
//		else if (input > 4)
//		{
//			printf("����ѡ��\n");
//		}
//		
//	} while (input);
//	return 0;
//}
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��:>\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 0:
//			printf("�˳�\n");
//			break;
//		case 1:
//			printf("����������������:>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Add(x, y));
//			break;
//		case 2:
//			printf("����������������:>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Sub(x, y));
//			break;
//		case 3:
//			printf("����������������:>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Mul(x, y));
//			break;
//		case 4:
//			printf("����������������:>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Div(x, y));
//			break;
//		default:
//			printf("����\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
//void Calc(int(*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	printf("����������������:>");
//	scanf("%d%d", &x, &y);
//	printf("%d\n", pf(x, y));
//}
//int main()
//{
//	int input = 0;
//	
//	do
//	{
//		menu();
//		printf("��ѡ��:>\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 0:
//			printf("�˳�\n");
//			break;
//		case 1:
//			Calc(Add);
//			break;
//		case 2:
//			Calc(Sub);
//			break;
//		case 3:
//			Calc(Mul);
//			break;
//		case 4:
//			Calc(Div);
//			break;
//		default:
//			printf("����\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr;//ȡ������ĵ�ַ
//	int(*pfArr[4])(int, int);
//	int(*(*ppfArr)[4])(int, int) = &pfArr;
//	//ppfArr��һ������ָ�룬ָ����������ĸ�Ԫ��
//	//ָ��ָ��������ÿ��Ԫ�������Ǻ���ָ��int(*)(int,int)
//	return 0;
//}
void print(char* str)
{
	printf("hehe:%s", str);
}
void test(void(*p)(char*))
{
	printf("test\n");
	p("bit\n");
}
int main()
{
	test(print);
	return 0;
}