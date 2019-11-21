////给定两个整形变量的值，将两个值的内容进行交换。 
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	int x = 2;
//	int mid = 0;
//	mid = i;
//	i = x;
//	x = mid;
//	printf("i=%d\nx=%d\n",i,x);
//	return 0;
//}
//// 不允许创建临时变量，交换两个数的内容（附加题） 
//#include<stdio.h>
//int main()
//{
//	int i = 5;
//	int x = 10;
//	i = i+x;
//	x = i-x;
//	i = i-x;
//	printf("x=%d\ni=%d\n",x,i);
//	
//}

////.求10 个整数中最大值。
//#include<stdio.h>
//int main()
//{
//	int arr[]={1,2,3,4,5,6,1000,8,9,10};
//	int max = 0;
//	int i = 0;
//	for(i=0; i<=9; i++)
//	{
//		if(arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max=%d\n",max);
//
//	return 0;
//}

//.将三个数按从大到小输出。 
//#include<stdio.h>
//int main()
//{
//	int a = 3;
//	int b = 10;
//	int c = 8;
//	int t = 0;
//	if(a<b)
//	{
//		t = a;
//		a = b;
//		b = t;
//	}
//	if(b<c)
//	{
//		t = b;
//		b = c;
//		c = t;
//	}
//	if(a<b)
//	{
//		t = a;
//		a = b;
//		b = t;
//	}
//	printf("%d %d %d\n",a,b,c);
//}
//求两个数的最大公约数。 
#include<stdio.h>
int main()
{
	int a = 12;
	int b = 16;
	int c = 0;
	int n = 0;
	n = b;
	c = a%b;
	while(c!=0)
	{
		a = b;
		b = c;
		c = a%b;
	}
	printf("%d\n",b);
	return 0;
	
}

