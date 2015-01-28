
		// PROGRAM FOR PRINTING FIBONACCI NUMBERS

	#include<stdio.h>
	#include<conio.h>

	int main(void)
	{
	  int i=0, n;
	  long double f1=0, f2=1, f3;
	  clrscr();

	  printf("\n \t no. of fibonacci terms:  ");
	  scanf("%d",&n);
	  clrscr();
	  printf("\n \t \t FIBONACCI NUMBERS");

	  while(i<=n)
	   {
	     f3 = f1 + f2;
	     i++;
	     printf("\n \t \t %-.0Lf \t %-.0Lf \t %-.0Lf ",f1,f2,f3);
	     f1 = f2;
	     f2 = f3;
	    }

	  getch();
	  return 0;
       }


