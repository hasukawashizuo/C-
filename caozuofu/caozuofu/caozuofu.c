#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int a = -1;
//	int b=a >> 1;//���Ʋ������ƶ����Ƕ�����λ,����ǲ���
//	printf("%d\n", b);
//	return 0;
//}
//int main()
//{
//	int a = 5;//101
//	int b = a << 1;//00000000000000000000000000000101
//	printf("%d\n", b);//�õ�10��1010
//	return 0;
//}
//int main()
//{
//	int a = 3;//011
//	int b = 5;//101
//	//int c = a&b;//��λ��
//	//int c = a | b;//��λ��
//	int c = a^b;//��λ���
//	printf("%d\n", c);//001  111  110
//	return 0;
//}
//int main()
//{
//	//�Ӽ�������������������������
//	int a = 3;
//	int b = 5;
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	//ȱ��  �����������Σ�������ֹ�����ӻᳬ�����εı�ﷶΧ
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
	//ͳ��num�Ĳ����м���1
	return 0;
}