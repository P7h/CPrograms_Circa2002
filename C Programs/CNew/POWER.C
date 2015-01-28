
	// RECURSI(ONS)VE PROGRAM FOR power(base,exponent)

	#include<stdio.h>
	#include<conio.h>


	int main(void)
	{
	  float base, exponent;
	  long double mypow(float, float);
	  int myabs(int);
	  clrscr();

	  printf("\n \t \t Enter base and exponent: ");
	  scanf("%f%f", &base, &exponent);
	  clrscr();

  if( (exponent > 0) && (exponent == (int)exponent) && (base == (int)base) )
	  printf("\n \n \n \n \n \n \t \t %.0f to the power %.0f is %.0Lf", base, exponent,
							mypow(base, exponent));

  else
	  printf("\n \n \n \n \n \n \t \t %.3f to the power %.3f is %.8Lf", base, exponent,
							mypow(base, exponent));
	  getch();
	  return 0;
	}


		// FUNCTION FOR CALCULATING power(base, exponent)
 long double mypow(float base, float exponent)
	{
	  int i, j = myabs((int)exponent);
	  long double myexp(float), answer =1;

  if (exponent == (int) exponent)
    {
	     if(exponent == 0)
	       return 1;

	     else
	     {  for (i=1; i<=j; i++)
		   answer *= base;
		if (exponent < 0)
		 answer = 1.0/answer;
	     }
    }   // end of if

 else
   {
	     if(base <= 0)
	     { printf("\n \n \n \n SORRY!!!- cannot raise a non-positive ");
	       printf("number to a floating-point power");
	       getch();
	       exit (0);}
	     else
	       answer = myexp(exponent * log(base));
   }    // end of else

     return (answer);
      }  //end of function



	// FUNCTION FOR FINDING ABSOLUTE VALUE OF AN INTEGER

      int myabs(int num)
      {
	return ((num<0 ? -num : num));
      }

       //  FUNCTION FOR EXPONENTIAL FUNCTION
      long double myexp(float num)
      {
	 int i= 1;
	 long double answer = 1, fact = 1;
	 long double mypow(float, float);

	   while(i<=30)
	     {
		   fact *= i;
		   answer += mypow(num,i)/fact;   // calling mypow() function again
		   i++;
	     }
	     return (answer);
	 }