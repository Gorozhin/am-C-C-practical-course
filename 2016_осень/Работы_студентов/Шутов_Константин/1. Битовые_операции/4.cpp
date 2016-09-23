#include<stdio.h>

int set1(int N, int P) 
{
    return (N | (1 << P));
}

int set0(int N, int P) 
{
    return (N & ~(1 << P));
}

bool bit(int N, int P) 
{
    return (N & ( 1 << P));
}

char n=0;
char s,p=0,c=0;

int main()
{
	scanf("%s",&s);
	if(s=='q') { return 0;}
	else if(s=='s')
	{
		printf("Vvedite poziciu ot 1 do 8\n");
		scanf("%d",&p);
		printf("Vvedite sostoyanie bita (1 - true, 2 - false)\n");
		scanf("%d",&c);
		if(c==1) {n=set1(n,p-1); printf("Bit ustanovlen na 1\n");}
		else if(c==2) {n=set0(n,p-1); printf("Bit ustanovlen na 0\n");}
		return main();
	}
	else if(s=='g')
	{
		printf("Vvedite poziciu ot 1 do 8\n");
		scanf("%d",&p);
		printf("Sostoyanie %d-ogo bita = %d\n",p,bit(n,p-1));
		return main();
	}
	else 
	{
		printf("Nevernaya komanda\n");		
		return main();
	}
}
