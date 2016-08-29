//////#include<iostream>
//////using namespace std;
//////#include<algorithm>
//////int main()
//////    {
//////    int n;
//////    int l;
//////    int a[1000];
//////	int b[1000];
//////    while(cin>>n>>l)
//////        {
//////        for(int i=1;i<=n;i++)
//////            cin>>a[i];
//////        //qiu两个捡最大的距离除以2
//////        a[0]=0;
//////        a[n+1]=l;
//////       sort(a,a+n+1);
//////	   int temp=0;
//////	   for(int j=0;j<=n+1;j++)
//////	   {
//////		   if(temp<=(a[j+1]-a[j]))
//////			   temp=a[j+1]-a[j];
//////	   }
//////	 
//////	   printf("%.2f",temp/2.0);
//////
//////		//for(int i=0;i<n+2;i++)
//////		//cout<<a[i]<<endl;
//////  //      
//////    }
//////    return 0;
//////}
////
////
//#include<iostream>
//using namespace std;
//int main()
//{
//	unsigned int h;
//    while(cin>>h)
//        {
//       for(unsigned int i=1;i<=h;i=i+1)
//           {
//           if((i*(i+1))>h)
//		   {   
//               cout<<i-1<<endl;  
//			  i=h+1;
//		   }
//
//       }
//        
//    }
//    return 0;
//}