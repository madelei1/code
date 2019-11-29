////创建一个数组， 实现函数init（）初始化数组、 实现empty（）清空数组、 实现reverse（）函数完成数组元素的逆置。
////要求：自己设计函数的参数，返回值。 
//#include<stdio.h>
//void init(int arr[],int sz)
//{
//	int i = 0;
//	for(i=0; i<sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for(i=0; i<sz; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	printf("\n");
//}
//void reverse(int arr[], int sz)
//{
//	int i = 0;
//	int tmp = 0;
//	if(i<sz)
//	{
//		tmp = arr[i];
//		arr[i] = arr[sz-1];
//		arr[sz-1] = tmp;
//		sz--;
//		i++;
//	}
//	
//}
//int main()
//{
//	int arr[] = {1,2,3,4,5};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	print(arr, sz);
//	init(arr, sz);
//	print(arr, sz);*/
//	reverse(arr, sz);
//	print(arr, sz);
//	return 0;
//}
//
//strlen的三种方法
//1、常规写法
//#include<stdio.h>
//int my_strlen( const char *str)
//{
//	
//	int count = 0;
//	while(*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count ;
//	
//}
//int main()
//{
//	char arr[] ="welcome";
//	int len = my_strlen(arr);
//	printf("%d\n",len);
//	return 0;
//}
//
//2、递归写法
//#include<stdio.h>
//int my_strlen(char*str)
//{
//	if(*str == '\0')
//	{
//		return 0;
//	}
//	else
//	{
//		return 1+my_strlen(str + 1);
//	}
//
//}
//int main()
//{
//	char arr[] ="welcome";
//	int len = my_strlen(arr);
//	printf("%d\n",len);
//	return 0;
//}
//3、指针减指针的方法
#include<stdio.h>
int my_strlen(char* str)
{
	char *p = str;
	while(*p != '\0')
	{
		p++;
	}
	return (p - str);
}
int main()
{
	char arr[] ="welcome";
	int len = my_strlen(arr);
	printf("%d\n",len);
	return 0;
}
