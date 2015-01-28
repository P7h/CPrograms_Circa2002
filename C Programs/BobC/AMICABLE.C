
	//    PROGRAM FOR FINDING AMICABLE NUMBERS
		// sum of factors of 220 = 284    &&
		// sum of factors of 284 = 220

#include<stdio.h>
#include<conio.h>

  long unsigned factors(long unsigned n)
	{
	 long unsigned i=2, sum=1;

	 while (i < n)
		{  if (n%i == 0)
		       sum += i;
			  i++;
		 }

	   return sum;
	 }

int main(void)
{
	long unsigned int num, facsum, facsumfac, i;
	clrscr();

/*	printf("\n \n \n \t Enter a number for finding it's AMICABLE NUMBER: ");
	scanf("%lu",&num);
	printf("\n\n\n\n\t");
		facsum = factors(num);
	     facsumfac = factors(facsum);
		if (num == facsumfac )
			printf("%lu  and %lu ", num, facsum);  }  */

	printf("\n \n \n \t Enter a number upto which u want AMICABLE NUMBERS: ");
	scanf("%lu",&num);
	printf("\n\n\n\n");

	for(i=101; i<=num; i++)
	{  facsum = factors(i);
	   facsumfac = factors(facsum);

		if (i == facsum)
			continue;

		if (i == facsumfac)
			printf("\n \t \t %lu  and %lu ", i, facsum);
	}

	getch();
	return 0;
}