//#include<iostream>
//using namespace std;
//#include<assert.h>
//
//int strfindstr(char * des, char *sub)
//{
//	assert(des!=NULL&&sub!=NULL);
//	const char *bp;
//	const char *sp;
//	int temp=0;
//	while(*des!=0)
//	{    
//		bp=des;
//		sp=sub;
//		
//		while(*bp==*sp)
//		{
//			bp++;
//			sp++;
//		}
//	
//		if(*sp==NULL)
//			return temp;
//		des=des+1;
//		temp++;	
//	}
//	return temp;
//}
//int main()
//{
//	int m=0;
//	char a[]="goodgoogle";
//	char b[]="goog";
//	m=strfindstr(a,b);
//	cout<<m<<endl;
//	return 0;
//}