#include<iostream>
using namespace std;
#include<assert.h>

char * strcpyzr(char *des,const char*src)
{
assert(des!=NULL&&src!=NULL);

	char *p;
	p=des;
	while(*src!=0)
	{
		*des=*src;
		src++;
		des++;
	}
	*des=0;
	return p;
}


int main()
{
	char a[20]="heheleell";
	char b[10]="hello";
	strcpyzr(a,b);
	cout<<a<<endl;
	return 0;
}
