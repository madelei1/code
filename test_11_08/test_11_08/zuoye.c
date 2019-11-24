//#include<stdio.h>
//int main()
//{
//	int arr[10] = {9,2,3,4,5};
//	printf("%p\n",arr);			//0093F70C
//	printf("%p\n",&arr[0]);		//0093F70C
//	printf("%d\n",*arr);		//9
//	return 0;
//	}
//
//将数组A中的内容和数组B中的内容进行交换。（数组一样大）
////#include<stdio.h>
////int main()
////{
////	int arrA[] = {7,8,9};
////	int arrB[] = {1,2,3};
////	int arrC[] = {0};
////	int i = 0;
////	int sz = sizeof(arrA)/sizeof(arrA[0]);
////	for(i=0;i<sz;i++)
////	{
////		arrC[i] = arrA[i];
////	}
////	for(i=0;i<sz;i++)
////	{
////		arrA[i] = arrB[i];
////	}
////	for(i=0;i<sz;i++)
////	{
////		arrB[i] = arrC[i];
////	}
////	for(i=0;i<sz;i++)
////	{
////		printf("arrA=%d ",arrA[i]);
////		printf("/n");
////		printf("arrB=%d ",arrB[i]);
////	}
////	
////	return 0;
////
////}
//#include <stdio.h>
//int main()
//{
//	int arr1[] = {1,2,3};
//	int arr2[] = {9,8,7};
//	int i;
//	int len = sizeof(arr1) / sizeof(arr1[0]);
//	
//	printf("更换前\n");
//	for (i = 0; i < len; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	for (i = 0; i < len; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	printf("\n");
// 
//	for (i = 0; i < len; i++)
//	{
//		arr1[i] = arr1[i] ^ arr2[i];
//		arr2[i] = arr1[i] ^ arr2[i];
//		arr1[i] = arr1[i] ^ arr2[i];
//	}
// 
//	printf("更换后\n");
//	for (i = 0; i < len; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	for (i = 0; i < len; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
// 
//	return 0;
//}
//计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值。 
//#include<stdio.h>
//int main()
//{
//	double i = 0;
//	int z = 0;
//	double sum = 0;
//	for(z=0; z<100; z++)
//	{
//		i = 1;
//		i = i/(z+1);
//		if((z+1)%2==0)
//		{ 
//			sum = sum-i;
//		}
//		else
//		{
//			sum = sum+i;
//		}
//	
//	}
//	printf("%f\n",sum);
//	return 0;
//}
////编写程序数一下 1到 100 的所有整数中出现多少次数字9。 
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for(i=1; i<=100; i++)
//	{
//		if(i%10==9 || i%9==0 && i%10==0)
//		{
//			count++;
//		}
//	}
//	printf("count=%d\n",count);
//		return 0;
//}
//.在屏幕上输出以下图案： 
// * 
// *** 
// ***** 
// ******* 
// ********* 
// *********** 
// ************ 
// *********** 
// ********* 
// ******* 
// ***** 
// *** 
// * 
// 

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	for(i=1; i<=7; i++)
//	{
//		for(n=1; n<=13; n++)
//		{
//			if(n<=2*i-1)
//			{
//				printf("*");
//			}
//		}
//		printf("\n");
//	}
//	for(i=1; i<=6; i++)
//	{
//		for(n=11; n>=1; n--)
//		{
//			if(n>=2*i-1)
//			{
//				printf("*");	
//			}
//			
//		}
//		printf("\n");
//	}
//	return 0;
//
//}
//求出0～999之间的所有“水仙花数”并输出
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	for(i=100; i<=999; i++)
//	{
//		a = i%10;
//		b = i/10%10;
//		c = i/10/10;
//		if(i == a*a*a+b*b*b+c*c*c)
//		{
//			printf("%d ",i);
//		}
//	}
//	return 0;
//	
//}
//求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字， 
#include<stdio.h>
#include<math.h>
int main()
{
	int i = 0;
	int a = 0;
	int b = 0;
	int sum = 1;
	int Sn = 0;
	for(i=1;i<=5;i++)
	{
		a = 5;
		sum = sum+ pow(10,i);
		b = sum*a;
		Sn = Sn +b ;
	}
	printf("Sn=%d\n",Sn);
	return 0;
}