////��ɲ�������Ϸ
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
//		printf("������һ������\n");
//		scanf("%d", &i);
//		if(i > random_x)
//		{
//			printf("�´���\n");
//		}
//		else if(i < random_x)
//		{
//			printf("��С��\n");
//			
//		}
//		else 
//		{
//			printf("�¶���\n");
//			break;
//		}
//	}
//	printf("��һ������%d\n",count);
//	
//	return 0;
//}

////д����������������������в�����Ҫ�����֣� �ҵ��˷����±꣬�Ҳ�������-1.���۰���ң� 
//#include<stdio.h>
//int main()
//{
//	int arr[]={1,2,3,4,5,6,7,8,9,10};
//	int left = 0;
//	int right = sizeof(arr)/sizeof(arr[0]) - 1;
//	int i = 0;
//	printf("��������Ҫ��ѯ������\n");
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
//			printf("�ҵ����±��ǣ�%d\n",mid);
//			break;
//		}
//	}
//	if(left > right)
//	{
//		printf("�Ҳ���\n");	
//	return -1;
//	}
//	return 0;
//}
//.��д����ģ��������������ĳ�����  ����������������룬������ȷ����ʾ����¼�ɹ���,������� 
//�����������룬����������Ρ����ξ�������ʾ�˳����� 
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int i = 0;
//	char password[20] = {0};
//	for(i=0; i<3; i++)
//	{
//		printf("����������:\n");
//		scanf("%s",password);
//		if(strcmp(password, "123456") == 0)
//		{
//			printf("��½�ɹ�\n");
//			break ;
//		}
//		else
//		{
//			printf("�����������������\n");
//		}
//	}
//	if(i == 3)
//	{
//		printf("��������������󣬳���Ҫ�˳�\n");
//	}
//	return 0;
//}
//��дһ�����򣬿���һֱ���ռ����ַ��� �����Сд�ַ��������Ӧ�Ĵ�д�ַ��� 
//������յ��Ǵ�д�ַ����������Ӧ��Сд�ַ��� ��������ֲ������ 
#include<stdio.h>
int main()
{  
	char x ;
	int y ;
	printf("�������ַ�:\n");
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
