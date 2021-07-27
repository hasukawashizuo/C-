#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
struct s
{
	int a;
	char c;
	char arr[20];
	double d;
};
struct t
{
	char ch[10];
	struct s a;
	char* pc;
};
struct a
{
	char name[20];
	int age;
	char tele[15];
	char sex[5];
};
//int main()
//{
//	char arr[] = "sb\n";
//	struct t t = { "hehe", { 100, 'w', "hello", 3.14 }, arr };
//	printf("%s\n", t.ch);
//	printf("%lf\n", t.a.d);
//	return 0;
//}
void print1(a a)
{
	printf("%s\n", a.name);
	printf("%d\n", a.age);
	printf("%s\n", a.tele);
	printf("%s\n", a.sex);
}
void print2(a* ps)
{
	printf("%s\n", ps->name);
	printf("%d\n", ps->age);
	printf("%s\n", ps->tele);
	printf("%s\n", ps->sex);
}
int main()
{
	struct a a = { "sb", 44, "12231434", "ÄÐ" };
	print1(a);
	print2(&a);
	return 0;
}