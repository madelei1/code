//ʹ�õݹ���n�Ľ׳ˡ��������������
//#include<stdio.h>
//
//int jie_chen(int y)
//{
//	if(y<=1)
//	{
//		return 1;
//	}
//
//	else
//	{	
//		return y * jie_chen(y-1);
//	}
//}
//int main()
//{
//	int i = 0;
//	int x = 0;
//	printf("��������Ҫ����׳˵���������\n");

//	scanf("%d",&i);
//	x = jie_chen(i);
//	printf("���Ľ׳���:\n%d\n",x);
//	return 0;
//}
//

//дһ�����������ж�һ�����ǲ��������� 
#include<stdio.h>
int pan(int x)
{
	int a = 0;
	for(a=2;a<x;a++)
	{
		if(x%a==0)
		{
			return 0;
		}
		
	}
			return 1;
}
int main()
{
	int i = 0;
	scanf("%d",&i);
	if(pan(i)==1)
	{
		printf("%d������\n",i);
	}
	else
	{
		printf("\n%d��������\n",i);
	}
}

//дһ�������ж�һ���ǲ������ꡣ 
//#include<stdio.h>
//int year(int x)
//{
//	if(x%4==0 && x%100!=0 || x%400==0)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	int i = 0;
//	for(i=1000;i<=2000;i++)
//	{
//		if(year(i)==1)
//		{
//			printf("%d������\n",i);
//		}
//		else
//		{
//			printf("%d��������\n",i);
//		}
//	}
//	return 0;
//}

// дһ��������ʵ��һ��������������Ķ��ֲ��ҡ� 
//#include<stdio.h>
//int er_fen(int arr[], int x, int sz)
//{
//	int left = 0;
//	int right = sz-1;
//	
//	while(right>=left)
//	{
//		int mid = (left+right)/2;
//		if(arr[mid]<x)
//		{
//			left = mid + 1;
//		}
//		else if(arr[mid]>x)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//	
//}
//int main()
//{
//	int arr[]={1,2,3,4,5,6,7,8,9,10};  
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int x = 7;
//	int a = er_fen(arr, x, sz);
//	
//	if(a!=-1)
//	{
//		printf("�ҵ��������±��ǣ�%d\n",a);
//	}
//	else
//	{
//		printf("û���ҵ�\n");
//	}
//
//	return 0;
//}
//
//дһ��������ÿ����һ������������ͻὫnum��ֵ����1��
//#include<stdio.h>
//void add(int *p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	add(&num);
//	printf("%d\n",num);
//	add(&num);
//	printf("%d\n",num);
//	add(&num);
//	printf("%d\n",num);
//	return 0;
//}
