#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
void digui(char* arr)
{
	if (*arr != '\0')
	{
		char* i = arr;
		while (1)
		{
			if (*i != '\0')
			{
				i++;
			}
			else
				break;
		}
		char tmp=*arr ;
		*arr = *(i - 1);
		*(i - 1) = tmp;//×Ö·û´®ÄæÖÃ
		tmp = *(i - 1);
		*(i - 1) = *(i);
		*i = tmp;
		digui(arr + 1);
		*i = *(i - 1);
		*(i - 1) = tmp;

	}
}
int main()
{
	char arr[] = "abcdef";
	digui(arr);
	printf("%s\n", arr);
	return 0;
}