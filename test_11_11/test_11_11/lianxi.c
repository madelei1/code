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
//���ֲ�������ȫ�ֱ���ͬ��ʱ������ʹ�þֲ�����
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
//	printf("�������������\n");
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
//	const float pai = 3.14; //const����ֻ��������
//    #define max 100
//	return 0;
//}
//��ӡc:\code\test.c
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	printf("c:\\code\\test.c\n");
//	strlen("c:\code\test.c");
//	printf("%d\n",strlen("c:\code\test.c")); //\t�ֱ����һ���ַ�
//	printf("%d\n",strlen("c:\\code\\test.c"));
//	printf("%d\n",strlen("c��\test\328\test.c"));
//
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 10;
//	printf("��������ÿ��Ĵ���ѧϰ�����ѵ�ʱ����\n");
//	scanf("%d",&a);
//	if(a>=b)
//	{
//		printf("�����ȥ���ú�ѧϰ���ú�offer�����������۷塣\n");
//	}
//	else
//	{
//		printf("û�кú�ѧϰ����ҵ����ʧҵ���ؼ�������\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int x = 0;
//	printf("�ú�ѧϰ����ϰ����\n");
//	
//	while(x <= 20)
//	{
//		x ++;
//		printf("��ҪŬ����ϰ���ú��ô���\n");
//	}
//	if(x>20)
//	{
//	printf("�ҵ�һ���ù�����ӭȢ�׸��������������۷塣\n");
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
//	printf("�����������\n");
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
//typedef unsigned int uint_32;  //���Ͷ��壬���͵�������
//int main()
//{
//	unsigned int num1 = 0;
//	uint_32 num2 = 0;			//num1��num2 ��������һ����
//	return 0;
//}
//static���ξֲ������ı��˾ֲ��������������ڣ��þֲ������ڳ�������Ž���֮����������ڣ������1-10��
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
//������Ĵ�ӡȫΪ1��
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
//ָ��Ĵ�С��32λƽ̨��4 �ֽڣ���64λƽ̨��8���ֽڣ��������ĸ�4��
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
//	struct Stu s ={"������", "161054", 22, "��"};
//	/*printf("name=%s id=%s age=%d sex=%s\n",s.name,s.id,s.age,s.sex);*/	//.Ϊ�ṹ��Ա�ķ��ʷ�
//	struct Stu *ps = &s;
//	printf("name=%s id=%s age=%d sex=%s\n",ps->name,ps->id,ps->age,ps->sex);	//->Ϊָ��ķ��ʲ�����
//	return 0;
//}
