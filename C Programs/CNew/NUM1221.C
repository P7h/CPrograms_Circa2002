
	// PROGRAM FOR FINDING NUMBERS like 12, 21 &&& 144, 441

	#include<stdio.h>
	#include<conio.h>

/*	int main(void)
	  {
	     int num1,nu1,num2,rem,revnum1=0,sqnum1,sqnum2;
	     clrscr();

	     printf("\n \t Enter 2 numbers: ");
	     scanf("%d%d",&num1,&num2);

	     nu1=num1;
	     while(num1>0)
	       {
		 rem=num1%10;
		 revnum1=revnum1*10+rem;
		 num1/=10;
		}

		if(revnum1!=num2)
		  { printf("\n these numbers r not applicable for this expt ");
		    getch();
		    exit(0);  }

		sqnum1=nu1*nu1;
		sqnum2=num2*num2;

	     revnum1=0;
	     while(sqnum1>0)
	       {
		 rem=sqnum1%10;
		 revnum1=revnum1*10+rem;
		 sqnum1/=10;
		}
		if(revnum1==sqnum2)
		 printf("\t  %d, %d  &&&&  %d, %d", nu1, num2, sqnum1, sqnum2);

		 getch();
		 return 0;
	}   */


	int main(void)
	  {
	     long unsigned sqnum1,sqnum2;
	     long unsigned revnum1=0,revnum2=0;
	     long unsigned reversenum(long unsigned);
	     int i, j, k=0;
	     clrscr();

	     for(i=11;i<=3111;i++)
	{
	     j=reversenum(i);

	     if(i==j)
	      continue;

		sqnum1 = (long unsigned)i*i;
		sqnum2 = (long unsigned)j*j;

		revnum1 = reversenum(sqnum1);

		if (revnum1==sqnum2)
		{  revnum2 = reversenum(sqnum2);
		     if (revnum2==sqnum1)
		      { printf("\t \t %6d, %6d      &&&  %10lu, %10lu \n", i, j, sqnum1, sqnum2); k++;
			if(k==20) { getch(); k=0;}
		      }
		 }
	       else continue;
	}
		 getch();
		 return 0;
    }


long unsigned reversenum(long unsigned num)
  {
     long unsigned revnum=0;
     int rem;

	     while(num>0)
	       { rem=num%10;
		 revnum=revnum*10+rem;
		 num/=10;  }
	       return (revnum);
     }