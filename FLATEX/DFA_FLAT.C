#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	int n,q[20][20],l,st,i,j,nst,at,f;char apb[36],s[100];
	printf("\nEnter no. of states :");
	scanf("%d",&nst);
	printf("\nEnter no. of alphabets :");
	scanf("%d",&at);
	printf("\nEnter the alphabets :");
	scanf("%s",&apb);
	for(i=0;i<nst;i++)
	{f
		for(j=0;j<at;j++)
		{
			printf("Enter Q%d [%c] : ",i,apb[j]);
			scanf("%d",&q[i][j]);
		}
	}
	printf("\nEnter Final State : ");
	scanf("%d",&f);
		
	
	printf("\nEnter the string A : \n");
	scanf("%s",&s);
	n=strlen(s);
	i=0,j=0,l=0,st=0;
	printf("\n\n Transition :- ");
	while(l<n)
	{			
		for(j=0;j<at;j++)
		if(s[l]==apb[j])
		st=q[i][j];		
		printf("q%d[%c] --> ",i,s[l]);
		i=st;
		l++;
	}
	printf(" q%d",st);
	if(st==f)
	printf("\n-----------VALID STRING---------");
	else
	printf("\n---------INVALID STRING---------");
    	
	return 0;
}
