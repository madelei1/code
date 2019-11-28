//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定，
//输入9，输出9*9口诀表，输入12，输出12*12的乘法口诀表。 
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
//	printf("请输入一个数表示你要的几乘几的\n");
//	scanf("%d",&x);
//	times(x);
//	return 0;
//}

////使用函数实现两个数的交换。
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
//.实现一个函数判断year是不是润年。 
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
//	printf("请输入需要查询的年份\n");
//	scanf("%d",&year);
//	t =run(year);
//	if(t == 1)
//	{
//		printf("%d是闰年\n",year);
//	}
//	else
//	{
//		printf("%d不是闰年\n",year);
//	}
//	return 0;
//}

//实现一个函数，判断一个数是不是素数。 
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
	printf("请输入需要判断的数字:\n");
	scanf("%d",&i);
	t = su(i);
	if(t)
	{
		printf("%d不是素数\n",i);
	}
	else
	{
		printf("%d是素数\n",i);
	}
	return 0;
}