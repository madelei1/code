//使用递归求n的阶乘。（不考虑溢出）
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
//	printf("请输入需要计算阶乘的正整数：\n");

//	scanf("%d",&i);
//	x = jie_chen(i);
//	printf("他的阶乘是:\n%d\n",x);
//	return 0;
//}
//

//写一个函数可以判断一个数是不是素数。 
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
		printf("%d是素数\n",i);
	}
	else
	{
		printf("\n%d不是素数\n",i);
	}
}

//写一个函数判断一年是不是闰年。 
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
//			printf("%d是闰年\n",i);
//		}
//		else
//		{
//			printf("%d不是闰年\n",i);
//		}
//	}
//	return 0;
//}

// 写一个函数，实现一个整形有序数组的二分查找。 
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
//		printf("找到了他的下标是：%d\n",a);
//	}
//	else
//	{
//		printf("没有找到\n");
//	}
//
//	return 0;
//}
//
//写一个函数，每调用一次这个函数，就会将num的值增加1。
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
