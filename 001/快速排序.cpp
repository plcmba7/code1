//#include<iostream>
//using namespace std;
//
//void swap(int &a,int &b)
//{
//	int t=a;
//	a=b;
//	b=t;
//}
//
//
//void quick_sort(int a[],int low,int high)
//{
//	int i,j,temp;
//		temp=a[low];
//	    i=low;
//	    j=high;
//	while(i<j)
//	{	
//		while(i<j)
//		{
//		while(i<j&&a[j]>temp)
//			j--;
//		while(i<j&&a[i]<=temp)
//			i++;
//		swap(a[i],a[j]);
//		}
//		swap(a[low],a[j]);
//	quick_sort(a,low,i-1);
//	quick_sort(a,i+1,high);
//	}
//
//}
//
//int main()
//{
//	int a[]={6,1,2,7,9,3,4,5,10,8};
//
//	quick_sort(a,0,9);
//	
//	for(int i=0;i<10;i++)
//	{
//		cout<<a[i];
//	}
//	return 0;
//}