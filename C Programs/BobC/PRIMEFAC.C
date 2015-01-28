
	//    PROGRAM FOR FINDING PRIME FACTORS of a given number


#include<stdio.h>
#include<conio.h>

   /*    void primefactors(long unsigned int n)         //using Recursion
       {
	static long unsigned int x = 2;

		if (n!=1)
		  {  if(n%x==0)
		      { printf("%lu\t",x); n /= x; }
		      else x++;
		      primefactors(n);
		  }
	}     */

int main(void)
{
	long unsigned int n, i=2;
	//void primefactors(long unsigned int);
	clrscr();

	printf("\n \n \n \t Enter a number for finding PRIME FACTORS: ");
	scanf("%lu",&n);
	printf("\n\n\n\n\t");

	 while (n != 1)
		{
		if (n%i == 0)
		  {   printf("\t%lu", i);
		      n /= i;  continue; }
		i++; }

//	primefactors(n);

	getch();
	return 0;
}