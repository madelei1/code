////完成猜数字游戏
//#include<stdio.h>
//#include<stdint.h>
//
//int main()
//{
//	int random_x = 80;
//	int i = 0 ;
//	int count = 0;
//	while(1)
//	{  
//		count++;
//		printf("请输入一个数：\n");
//		scanf("%d", &i);
//		if(i > random_x)
//		{
//			printf("猜大了\n");
//		}
//		else if(i < random_x)
//		{
//			printf("猜小了\n");
//			
//		}
//		else 
//		{
//			printf("猜对了\n");
//			break;
//		}
//	}
//	printf("您一共猜了%d\n",count);
//	
//	return 0;
//}

////写代码可以在整型有序数组中查找想要的数字， 找到了返回下标，找不到返回-1.（折半查找） 
//#include<stdio.h>
//int main()
//{
//	int arr[]={1,2,3,4,5,6,7,8,9,10};
//	int left = 0;
//	int right = sizeof(arr)/sizeof(arr[0]) - 1;
//	int i = 0;
//	printf("请输入需要查询的数：\n");
//	scanf("%d",&i);
//	while(left <= right)
//	{
//		int mid = (left+right)/2;
//		if(arr[mid] < i)
//		{
//			left = mid + 1;
//		}
//		if(arr[mid] > i)
//		{
//			right = mid - 1;
//		}
//		if(arr[mid] == i)
//		{
//			printf("找到了下表是：%d\n",mid);
//			break;
//		}
//	}
//	if(left > right)
//	{
//		printf("找不到\n");	
//	return -1;
//	}
//	return 0;
//}
//.编写代码模拟三次密码输入的场景。  最多能输入三次密码，密码正确，提示“登录成功”,密码错误， 
//可以重新输入，最多输入三次。三次均错，则提示退出程序。 
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int i = 0;
//	char password[20] = {0};
//	for(i=0; i<3; i++)
//	{
//		printf("请输入密码:\n");
//		scanf("%s",password);
//		if(strcmp(password, "123456") == 0)
//		{
//			printf("登陆成功\n");
//			break ;
//		}
//		else
//		{
//			printf("密码错误，请重新输入\n");
//		}
//	}
//	if(i == 3)
//	{
//		printf("三次密码输入错误，程序将要退出\n");
//	}
//	return 0;
//}
//编写一个程序，可以一直接收键盘字符， 如果是小写字符就输出对应的大写字符， 
//如果接收的是大写字符，就输出对应的小写字符， 如果是数字不输出。 
#include<stdio.h>
int main()
{  
	char x ;
	int y ;
	printf("请输入字符:\n");
	while((x=getchar())!=EOF)
	{
		
		if(x>=65 && x<=90)
		{
			y = x + 32;
			putchar(y);
		}
		else if(x>=97 && x<=122)
		{
			y = x - 32;
			putchar(y);
		}
		
	}
	return 0;
}
