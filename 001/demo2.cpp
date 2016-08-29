//#include<iostream>
//#include<math.h>
//using namespace std;
////
////
////网易移动西瓜问题。
//int main()
//{
//	int n;
//	int a[100];
//	int total=0;
//	int p=0;
//	int q=0;
//	int coutnum=0;
//	while(cin>>n)
//	{
//		for(int i=0;i<n;i++)
//		{
//			cin>>a[i];
//			total=total+a[i];
//			
//		}
//		for(int i=0;i<n;i++)
//		{
//			if(a[i]%2!=a[i+1]%2)
//			{
//				p=1;
//
//			}
//		}
//		
//		if(total%n!=0||p==1)
//			cout<<-1<<endl;
//		else
//		{
//			int temp=total/n;
//
//			for(int i=0;i<n;i++)
//			{
//				coutnum=coutnum+abs(a[i]-temp)/2;
//			}
//			cout<<(coutnum-1)/2+1<<endl;
//		}
//		
//	}
//}