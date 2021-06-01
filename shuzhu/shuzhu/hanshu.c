#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int arr[3][4] = { { 1, 2 }, { 3, 4 } };
//	int i = 0;//控制行数
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;//控制列数
//		for (j = 0; j < 4; j++)
//		{
//			printf("arr[%d][%d]=%p ",i,j,&arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;//控制冒泡排序的趟数（sz-1趟）
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;//一次冒泡排序比较的次数（sz-1-i趟)
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = 0;
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		} 
//
//	}
//}
//int main()
//{
//	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}