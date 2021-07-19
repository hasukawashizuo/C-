#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//int main()
//{
//	short s = 0;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 5));//2
//	printf("%d\n", s);//0
//	return 0;
//}
//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));
//}
//int get_max(int x, int y)
//{
//	return x > y ? x : y;
//}
struct stu
{
	char name[20];
	int age;
	char id[20];
}; 
//int main()
//{
	//int a = 11;
	//a = a | (a >> 2);//00000000000000000000000000001011变为1111
	//printf("%d", a);
	//a = a & (~(1 >> 2));
	//printf("%d", a);
	//int a = 0;
	//00000000000000000000000000000000原码补码反码相同，按位取反
	//11111111111111111111111111111111补码，要转化为原码,先-1
	//11111111111111111111111111111110符号位不变，其他按位取反
	//10000000000000000000000000000001值为-1
	//printf("%d", ~a);
	/*int a = 10;*/
	//printf("%d", ++a);//前置++，先++再使用
	/*printf("%d", a++);*/
	/*int arr[10] = { 0 };
	char ch[10] = { 0 };
	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(ch));
	test1(arr);
	//test2(ch);*/
	//int a = 3;
	//int b = 5;
	//int c = a && b;//逻辑与
	//printf("%d\n", c);//1
	//a = 0;
	//b = 0;
	//c = a || b;//逻辑或
	//printf("%d\n", c);//0
	/*int i = 0, a = 0, b = 2, c = 3, d = 4;*/
	/*i = a++ && ++b && d++;*/
	/*i = a++ || ++b || d++;
	printf("a=%d\n b=%d\n c=%d\n d=%d\n", a, b, c, d);*/
	/*int a = 1;
	int b = 2;
	int c = (a > b, a = b + 10, a, b = a + 1);
	printf("%d\n", c);*/
	/*int a[10] = { 0 };
	a[4] = 10;*/
	/*int a = 10;
	int b = 20;
	int max = get_max(a, b);
	printf("%d\n", max);*/
	/*int a = 10;*/
	//使用struct stu这个类型创建了一个学生对象，并初始化
//	struct stu s1 = {"欧仔",80,"23"};
//	struct stu* ps = &s1;
//	printf("%s", ps->name);
//	printf("%s", (*ps).name);
//	/*printf("%s",s1.name);
//	printf("%d",s1.age);
//	printf("%s",s1.id);*/
//	return 0;
//}
int main()
{
	char a = 3,b=127;
	char c = a + b;
	printf("%d\n", c);
	return 0;
}