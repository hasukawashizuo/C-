#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a = 10;
//	float b = 10.0;
//	return 0;
//}
//int panduan()
//{
//	int a = 1;
//	return *(char*)&a;
//}
//int panduan()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	//if (*p == 1)
//	//{
//	//	return 1;//小端
//	//}
//	//else
//	//	return 0;
//	return *p;
//}
//int main()
//{
	//int a = 1;
	//char* p = (char*)&a;//取出a的第一个储存的
	//if (*p == 1)
	//{
	//	printf("小端");
	//}
	//else
	//{
	//	printf("大端");
	//}
	/*int ret = panduan();
	if (ret == 1)
	{
		printf("小端\n");
	}
	else
		printf("大端\n");
	return 0;
}*/
//int main()
//{
//	char a = -128;
//	printf("%u\n", a);
//	return 0;
//}
//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//	}
//	return 0;
//}
int main()
{
	int n = 9;
	float* p = (float*)&n;
	printf("n=%d\n", n);
	printf("p=%lf\n", *p);
	*p = 9.0;
	printf("n=%d\n", n);
	printf("p=%lf\n", *p);
	return 0;
}