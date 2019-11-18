//#include<stdio.h>
//int main()
//{
//    printf("hehe\n");
//
//    return 0;
//}

//打印100——200之间的素数
//#include<stdio.h>
//int main()
//{
//   int i = 0;
//   int j = 0;
//   for(i=100; i <= 200; i++)
//   {
//	 for(j=2; j<i; j++)
//	 {
//		 if(i%j==0)
//		 {
//			break;
//		 }
//	 }  
//			if(j>=i)
//			{
//				 printf("%d\n",i);
//			
//			}
//	 }
//  
//   return 0;
//}
//
//并且统计个数
//#include<stdio.h>
//int main()
//{
//   int i = 0;
//   int j = 0;
//   int count = 0;
//   for(i=100; i <= 200; i++)
//   {
//	 for(j=2; j<i; j++)
//	 {
//		 if(i%j==0)
//		 {
//			break;
//		 }
//	 }  
//			if(j>=i)
//			{
//				 count++;
//				 printf("%d ",i);
//			
//			}
// }
//
//  printf("\n%d\n",count);
//   return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	for(i=100; i<=200; i++)
//	{
//		for(j=2; j<=(i/2); j++)
//		{
//			if(i%j==0)
//				break;
//		}
//			if(j>(i/2))
//			{
//				count++;
//			   printf("%d\n",i);
//			}
//		
//		
//	}
//	printf("%d\n",count);
//    return 0;
//}




//#include<stdio.h>
//int main()
//{
//   int i = 0;
//   int j = 0;
//   int count = 0;
//   for(i=100; i <= 200; i++)
//   {
//	 for(j=2; j<=i/2; j++)
//	 {
//		 if(i%j==0)
//		 {
//			break;
//		 }
//	 }  
//			if(j>i/2)
//			{
//				 count++;
//				 printf("%d ",i);
//			
//			}
//	
//
//   }
//
//  printf("\n%d\n",count);
//   return 0;
//}


//输出乘法口诀表
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for(i=1; i<=9; i++)
//	{
//		for(j=1; j<=i; j++)
//		{
//		   printf("%d*%d=%-2d ",i,j,i*j);//-2d左对齐
//		}
//		printf("\n");
//	}
//	
//	
//	return 0;
//
//}
//
//判断1000-2000之间的闰年
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for(i=1000; i<=2000; i++)
//	{
//		if(i%4==0)
//		{
//			if(i%100 !=0)
//			printf("%d ",i);	
//		}
//	
//		 if(i%400==0)
//		{
//			printf("%d ",i);
//		}
//	}
//	return 0;
//}