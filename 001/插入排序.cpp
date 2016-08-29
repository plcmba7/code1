//#include<iostream>
//#include<time.h>
//
//using namespace std;
//
//void swap(int &a,int &b)
//{
//	int ww=a;
//	a=b;
//	b=ww;
//}
//int main()
//{
//	 int   istart;   
//      istart=GetTickCount();   
//	int temp,b;
//	int a[]={7,2,4,8,5,6,9,1};
//
//
//	for(int i=0;i<8;i++)
//	{
//		temp=a[i];
//		b=i;
//		for(int j=i+1;j<8;j++)
//		{
//			if(temp>a[j])
//			{
//				b=j;
//				temp=a[j];
//			}
//
//		}
//		swap(a[i],a[b]);
//	}
//
//	for(int i=0;i<8;i++)
//	{
//		cout<<a[i]<<endl;
//	}
//
//	cout<<"调用该程序所花费的时间为:"<<GetTickCount()-istart<<"秒\n";
//	return 0;
//}