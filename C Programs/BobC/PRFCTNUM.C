
//    PROGRAM FOR FINDING WHETHER A NUMBER IS PERFECT NUMBER r not
//    Sum of Factors = Number ie a PERFECT number eg 6 = 1+2+3

#include<stdio.h>
#include<conio.h>
    /*
int main(void)
{
	       long unsigned num, sum=0, i ;
	       clrscr();

	       printf("\n \n \n \t \t \t Enter any number:  ");
	       scanf("%lu",&num);

		for(i=1; i<num; i++)
			if(num%i == 0)
				sum += i;

		if (sum == num)
			printf("\n \n \t \t \t %lu is a PERFECT NUMBER ");
		else printf("\n \n \t \t \t %lu is not a PERFECT NUMBER ");

		getch();
		return 0;
} */


int main(void)
{
	       long unsigned num, sum, i, j;
	       clrscr();

	       printf("\n \n \n \t Enter Number upto which u want PERFECT NUMBERS:  ");
	       scanf("%lu",&num);

		for(i=1; i<num; i++){  sum=0;
		for(j=1; j<i; j++)
		       {   if(i%j == 0)
				sum += j;  }

		if (sum == i)
			printf("\n \t \t \t %lu is a PERFECT NUMBER ");
			}

		getch();
		return 0;
}