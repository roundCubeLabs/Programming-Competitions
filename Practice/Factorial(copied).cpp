#include<stdio.h>
int s;


int fact(int n)
	{
	if(n<5)
	return 0;
	else
	{
    n=n/5;
      s=s+n;
     fact(n);
    }
}

int main()
{
int n,m,i;
scanf("%d",&m);
for(i=0;i<m;i++)
{
scanf("%d",&n);
fact(n);
printf("%d\n",s);
s=0;
}
return 0;

}

