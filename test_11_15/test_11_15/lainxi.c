#include<stdio.h>
//int main()
//{
//	int a = 0;
//	printf("����������\n");
//	scanf("%d",&a);
//	switch(a)
//	{
//	case 1:
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	default :
//		printf("û�����Ӧ������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//	case 7:
//		printf("������\n");
//		break;
//
//
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while(i <= 100)
//	{
//		
//		printf("%d\n",i);
//		i++;
//	}
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	while(i <= 10)
//	{
//		if(i == 5)
//		{
//			break;
//		}
//		printf("%d ",i);
//		i++;
//	}
//	printf("\n");
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	while(i <= 10)
//	{
//		i++;
//		if(i == 5)
//		{
//			continue;
//		}
//		printf("%d ",i);
//		
//	}
//	printf("\n");
//	return 0;
//}
//int main()
//{
//	int ch = 0;
//	while((ch =getchar()) != EOF) //EOF=-1;�����ַ���������ʱδ���У���ʱ�ڰ�enter�ڰ�ctrl+z���ɽ���¼�룩
//	{
//		putchar(ch);
//	}
//	return 0;
//}
//
//�����ַ�����ӡ�������֡�
//int main()
//{
//	int ch = 0;
//	while((ch =getchar()) != EOF)
//	{
//		if(ch<'0' ||ch>'9')
//		{
//			continue;
//		}
//		putchar(ch);
//	}
//	return 0;
//}
//strlen
//int main()
//{
//	char arr[] = "welcome to bit";
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int i = 0;
//	int count = 0;
//	for(i=0; i<sz; i++)
//	{
//		if(arr[i] != '\0')
//		{
//			count++;
//		}
//	}
//		printf("count=%d",count);
//		printf("\n");
//		return 0;	
//}
//int my_strlen(char *arr, int sz)
//{
//	int i = 0;
//	int count = 0;
//	for(i=0; i<sz; i++)
//	{
//		

//		if(arr[i] != '\0')
//		{
//			count++;
//		}
//		
//	}
//	return count;
//	
//}
//int main()
//{
//	char arr[] = "welcome to bit";
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int x = my_strlen(arr,sz);
//	printf("x=%d",x);
//	printf("\n");
//	return 0;
//}

//.д����������������������в�����Ҫ�����֣� 
//�ҵ��˷����±꣬�Ҳ�������-1.���۰���ң�
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int x = 0;
//	int left = 0;
//	int right = sz-1;
//	scanf("%d",&x);
//	while(left <= right)
//	{
//		int mid = (left+right)/2 ;
//		if(x > arr[mid])
//		{
//			left = mid + 1;
//
//		}
//		else if(x < arr[mid])
//		{
//			right = mid - 1;
//
//		}
//		else if(x == arr[mid])
//		{
//			printf("%d\n",mid);
//			break;
//		}
//	}
//	if(right < left)
//	{
//
//		printf("�Ҳ���\n");
//	}
//	
//	return 0;
//
//}
int erfen(int *arr,int sz)
{
	int x = 0;
	int left = 0;
	int right = sz-1;
	scanf("%d",&x);
	while(left <= right)
	{
		int mid = (left+right)/2 ;
		if(x > arr[mid])
		{
			left = mid + 1;

		}
		else if(x < arr[mid])
		{
			right = mid - 1;

		}
		else if(x == arr[mid])
		{
			return mid;
			break;
		}
	}
	if(right < left)
	{

		return -1;
	}
	

}
int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int sz = sizeof(arr)/sizeof(arr[0]);
	int m =erfen(arr,sz);
	printf("%d\n",m);
	return 0;
	
}