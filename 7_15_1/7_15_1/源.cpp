#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//ð������
//void bubblesort(int arr[10], int sz)
//{
//	int i = 0;//����ð������
//	int j = 0;//����һ��ð���е�����
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;//ȷ���Ƿ���ȫ����
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j]>arr[j + 1])
//			{
//				flag = 0;
//				int tmp = 0;
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//		if (flag == 1)
//			break;
//	}
//	printf("����Ϊ%d\n", i);
//}
//int main()
//{
//	int arr[10] = {1,0,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubblesort(arr, sz);
//	int p = 0;
//	for (p = 0; p < sz; p++)
//		printf("%d ", arr[p]);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	void* p = &a;
//	*p = 0;//void*���͵�ָ����Խ����κ����͵ĵ�ַ
//	       //void*���͵�ָ�벻�ܽ�����
//	p++;   //void*���͵�ָ�벻�ܽ��мӼ������Ĳ���
//	return 0;
//}
int cmp_int(const void*e1, const void*e2)
{
	return *(int*)e1 - *(int*)e2;
}
int cmp_float(const void*e1, const void*e2)
{
	/*return   (int)(*(float*)e1 - *(float*)e2);*/
	return   (int*)e1 - (int*)e2;//�����������
}
struct stu
{
	char name[20];
	int age[10];
};
int cmp_struct_age(const void*e1, const void*e2)
{
	return  ((struct stu*)e1)->age - ((struct stu*)e2)->age;
}
int cmp_struct_name(const void*e1, const void*e2)
{
	return  strcmp(((struct stu*)e1)->name , ((struct stu*)e2)->name);
}
void test3()
{
	struct stu s[3] = { { "zhangsan", 20 }, { "lisi", 10 }, { "wangwu", 30 } };
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), cmp_struct_age);
	qsort(s, sz, sizeof(s[0]), cmp_struct_name);
}
int main()
{
	int arr[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	/*qsort(arr, sz, sizeof(arr[0]), cmp_int);*/
	float f[] = { 5.0, 4.0, 3.0, 2.0, 1.0 };
	int sz2 = sizeof(f) / sizeof(f[0]);
	/*qsort(f, sz2, sizeof(f[0]), cmp_float);*/
	/*int p = 0;
		for (p = 0; p < sz2; p++)
			printf("%f ", f[p]);*/
	test3();
	return 0;
}