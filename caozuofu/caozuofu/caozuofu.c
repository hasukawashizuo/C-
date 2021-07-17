#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int a = -1;
//	int b=a >> 1;//右移操作符移动的是二进制位,存的是补码
//	printf("%d\n", b);
//	return 0;
//}
//int main()
//{
//	int a = 5;//101
//	int b = a << 1;//00000000000000000000000000000101
//	printf("%d\n", b);//得到10，1010
//	return 0;
//}
//int main()
//{
//	int a = 3;//011
//	int b = 5;//101
//	//int c = a&b;//按位与
//	//int c = a | b;//按位或
//	int c = a^b;//按位异或
//	printf("%d\n", c);//001  111  110
//	return 0;
//}
//int main()
//{
//	//加减法不创建第三变量交换数字
//	int a = 3;
//	int b = 5;
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	//缺点  创建的是整形，如果数字过大相加会超过整形的表达范围
//	return 0;
//}
int main()
{
	int num = 0;
	scanf("%d", &num);
	int count = 0;
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		if (1 == ((num >> i) & 1))
		{
			count++;
		}
	}
	printf("%d", count);
	//统计num的补码有几个1
	return 0;
}