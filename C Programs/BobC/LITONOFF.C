
//    PROGRAM FOR FINDING WHETHER LIGHTS r ON r OFF  (Praveen's prob)


#include<stdio.h>
#include<conio.h>

int main(void)
{
	int i,j,count;
	clrscr();

	for(i=1; i<=100;i++)
	      {	count=0; for(j=1; j<=i;j++)
				{   if(i%j==0)
					count++; }
				     if(count%2 == 0)
				      printf("\n \t %d - OFF",i);
				      else printf("\n \t %d - ONN",i);
	      }

	getch();
	return 0;
}