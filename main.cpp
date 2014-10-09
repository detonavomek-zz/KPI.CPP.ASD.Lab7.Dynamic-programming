#include <iostream>
#include <Math.h>
using namespace std;
int main()
{
	float n,s=0,p;
	cout<<"Enter \"n\": ";
	cin>>n;
	for(int i=1; i<=n; i++)
	{
		p=1;
			for(int j=1; j<=i; j++)
				p*=j+cos((float)j);
		s+=(pow((float)4,i)-i)/p;
	}
	printf("S = %.7f \n",s);
	return 0;
}