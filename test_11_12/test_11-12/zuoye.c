//ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ����
//����9�����9*9�ھ�������12�����12*12�ĳ˷��ھ��� 
//#include<stdio.h>
//void times(int x)
//{
//	int i = 0;
//	int j = 0;
//	int t = 0;
//	for(i=1; i<=x; i++)
//	{
//		for(j=1; j<=i; j++)
//		{
//		t = i * j;
//		printf("%d*%d=%-3d  ",j,i,t);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int x = 0;
//	printf("������һ������ʾ��Ҫ�ļ��˼���\n");
//	scanf("%d",&x);
//	times(x);
//	return 0;
//}

////ʹ�ú���ʵ���������Ľ�����
//#include<stdio.h>
//void huan(int *x, int *y)
//{
//	int z = 0;
//	z = *x;
//	*x = *y;
//	*y = z;
//}
//int main()
//{
//	int x = 10;
//	int y = 5;
//	huan(&x,&y);
//	printf("x=%d\ny=%d\n",x,y);
//	return 0;
//}
//.ʵ��һ�������ж�year�ǲ������ꡣ 
//#include<stdio.h>
//int run(int x)
//{
//	if(x%4==0 && x%100!=0)
//	{
//		return 1;
//	}
//	else if(x%400==0)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//
//	}
//}
//int main()
//{
//	int year = 0;
//	int t = 0;
//	printf("��������Ҫ��ѯ�����\n");
//	scanf("%d",&year);
//	t =run(year);
//	if(t == 1)
//	{
//		printf("%d������\n",year);
//	}
//	else
//	{
//		printf("%d��������\n",year);
//	}
//	return 0;
//}

//ʵ��һ���������ж�һ�����ǲ��������� 
#include<stdio.h>
int su(int x)
{
	int i = 0;
	for(i=2; i<x; i++)
	{
		if(x%i==0)
		{
		return 1;
		}
	}
	return 0;
}
int main()
{
	int t = 0;
	int i = 0;
	printf("��������Ҫ�жϵ�����:\n");
	scanf("%d",&i);
	t = su(i);
	if(t)
	{
		printf("%d��������\n",i);
	}
	else
	{
		printf("%d������\n",i);
	}
	return 0;
}