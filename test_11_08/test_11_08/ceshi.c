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
#include <stdio.h>
int main()
{
	int arr1[] = {1,2,3};
	int arr2[] = {9,8,7};
	int i;
	int len = sizeof(arr1) / sizeof(arr1[0]);
	
	printf("更换前\n");
	for (i = 0; i < len; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");
	for (i = 0; i < len; i++)
	{
		printf("%d ", arr2[i]);
	}
	printf("\n");
 
	for (i = 0; i < len; i++)
	{
		arr1[i] = arr1[i] ^ arr2[i];
		arr2[i] = arr1[i] ^ arr2[i];
		arr1[i] = arr1[i] ^ arr2[i];
	}
 
	printf("更换后\n");
	for (i = 0; i < len; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");
	for (i = 0; i < len; i++)
	{
		printf("%d ", arr2[i]);
	}
 
	return 0;
}