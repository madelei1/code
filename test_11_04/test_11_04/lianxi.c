//#include<stdio.h>
//int main()
//{
//int i;
//
//scanf("%d",&i);
//
//  if(i%2!=0)
//  {
//		printf("%d������\n",i);
//  }
//  else
//  {
//	printf("%d��������\n",i);
//  }
//  return 0;
//}


//n��
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//
//	int n = 0;
//
//	int j = 1;
//
//	scanf("%d", &n);
//
//	for(i=1; i<=n; i++)
//	{
//		j=j*i;
//    }
//    printf("%d\n", j);
//
//	return 0;
//}


//1!+2!+3!+...+10!
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 1;
//	int sum = 0;
//	int n = 1;
//	for(n=1; n<=10; n++)
//	{
//		int j = 1;
//		for(i=1; i<=n; i++)
//		{
//			j=j*i;
//		}
//		sum = sum +j;
//	}
//	printf("%d\n",sum);
//	return 0;
//}
//�۰����
#include<stdio.h>
int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int left = 0;
	int right = 9;
	int i = 7;
	while(left <= right)
	{
		int mid = (left+right)/2;
		if(i > arr[mid])
	    {
		left = mid+1;
	    }
	    else if(i < arr[mid])
	    {
		right = mid-1;
	    }
	    else
	    {
		printf("�ҵ���,�±��ǣ�%d\n",mid);
		break;
	    }
	}
	if(right<left)
	{
		printf("�Ҳ���\n");
	}
	return 0;
}
//forѭ���˼���
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for(i=0,k=0; k=0; i++,k++)
//		{
//			k++;
// 		}
//	printf("%d\n",k);
//	return 0;
//}

  

