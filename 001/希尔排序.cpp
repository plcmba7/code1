//#include<iostream>
//#include<string.h>
//using namespace std;
//  #include<windows.h>   
//#include <time.h>
//int main()
//{
// int   istart;   
//      istart=GetTickCount();
//
//	int a[]={2,4,6,1,7,5,9,8};
//	int j;
//	int len=8;
//	for(int h=len/2;h>0;h=h/2)
//	{
//
//		for(int i=h;i<8;i++)
//		{
//			int temp=a[i];
//			for(j=i-h;j>=0&&temp<a[j];j=j-h)
//			{
//				a[j+h]=a[j];
//			}
//			a[j+h]=temp;
//		}
//
//	}
//
//	for(int i=0;i<8;i++)
//		cout<<a[i]<<endl;
//	  cout<<"调用该程序所花费的时间为:"<<clock()<<"秒\n";
//	  cout<<"调用该程序所花费的时间为:"<<GetTickCount()-istart<<"秒\n";
//
//	return 0;
//}