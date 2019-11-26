//#include<stdio.h>
//int main()
//{
//	printf("hehe\n");
//	printf("haha \n");
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	printf("%d\n",sizeof(char));			//1 byte
//	printf("%d\n",sizeof(int));				//4
//	printf("%d\n",sizeof(long));			//4
//	printf("%d\n",sizeof(float));			//4
//	printf("%d\n",sizeof(double));			//8
//	printf("%d\n",sizeof(short));			//2
//	printf("%d\n",sizeof(long long));		//8
//	printf("%d\n",sizeof(long double));		//8
//	return 0;
//}
//当局部变量和全局变量同名时候，优先使用局部变量
//#include<stdio.h>
//int global = 2019;
//int main()
//{
//	int local = 2018;
//	int global = 2020;
//	printf("global = %d\n",global);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	printf("输入二个操作数\n");
//	scanf("%d %d",&num1, &num2);
//	sum = num1 + num2;
//	printf("%d\n",sum);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	3.14;
//	1000;
//	const float pai = 3.14; //const修饰只读变量名
//    #define max 100
//	return 0;
//}
//打印c:\code\test.c
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	printf("c:\\code\\test.c\n");
//	strlen("c:\code\test.c");
//	printf("%d\n",strlen("c:\code\test.c")); //\t分别代表一个字符
//	printf("%d\n",strlen("c:\\code\\test.c"));
//	printf("%d\n",strlen("c：\test\328\test.c"));
//
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 10;
//	printf("请输入你每天的代码学习所花费的时间量\n");
//	scanf("%d",&a);
//	if(a>=b)
//	{
//		printf("坚持下去，好好学习，拿好offer，走向人生巅峰。\n");
//	}
//	else
//	{
//		printf("没有好好学习，毕业等于失业，回家卖红薯。\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int x = 0;
//	printf("好好学习，练习代码\n");
//	
//	while(x <= 20)
//	{
//		x ++;
//		printf("我要努力练习，好好敲代码\n");
//	}
//	if(x>20)
//	{
//	printf("找到一个好工作，迎娶白富美，走向人生巅峰。\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int Add(int x, int y)
//{
//	return x+y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("请输入二个数\n");
//	scanf("%d %d",&a,&b);
//	 c = Add(a,b);
//	printf("%d\n",c);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	for(i=0; i<10; i++)
//	{
//		printf("%d\n",arr[i]);
//	}
//	return 0;
//}
//#include<stdio.h>
//typedef unsigned int uint_32;  //类型定义，类型的重命名
//int main()
//{
//	unsigned int num1 = 0;
//	uint_32 num2 = 0;			//num1和num2 的类型是一样的
//	return 0;
//}
//static修饰局部变量改变了局部变量的生命周期，让局部变量在程序结束才结束之间的生命周期（结果：1-10）
//#include<stdio.h>
//void test()
//{
//	static int x = 0;
//	x++;
//	printf("%d ",x);
//}
//int main()
//{
//	int i = 0;
//	for(i=0; i<10; i++)
//	{
//		test();
//	}
//	return 0;
//}
//（下面的打印全为1）
//#include<stdio.h>
//void test()
//{
//	int x = 0;
//	x++;
//	printf("%d ",x);
//}
//int main()
//{
//	int i = 0;
//	for(i=0; i<10; i++)
//	{
//		test();
//	}
//	return 0;
//}
//指针的大小在32位平台是4 字节，在64位平台是8给字节（结果输出四个4）
//#include<stdio.h>
//int main()
//{
//	printf("%d\n",sizeof(char *));
//	printf("%d\n",sizeof(int *));
//	printf("%d\n",sizeof(float *));
//	printf("%d\n",sizeof(double *));
//	return 0;
//}
//
//#include<stdio.h>
//struct Stu
//{
//	char name[20];
//	char id[20];
//	int age;
//	char sex[5];
//};
//int main()
//{
//	struct Stu s ={"郭少奇", "161054", 22, "男"};
//	/*printf("name=%s id=%s age=%d sex=%s\n",s.name,s.id,s.age,s.sex);*/	//.为结构成员的访问符
//	struct Stu *ps = &s;
//	printf("name=%s id=%s age=%d sex=%s\n",ps->name,ps->id,ps->age,ps->sex);	//->为指针的访问操作符
//	return 0;
//}
