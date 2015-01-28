

//    PROGRAM FOR FINDING WHETHER A NUMBER IS DIVISIBLE BY 2 to 11 r not

#include<stdio.h>
#include<conio.h>

int main(void)
{
	       int sum=0, count=0, even=0, odd=0, i;
	       static int revnum[10];
	       long unsigned num;
	       clrscr();

	       printf("\n \n \n \t \t \t Enter any number:  ");
	       scanf("%lu",&num);
	       printf("\n \n \t \t   %lu is  \n",num);

		for(i=2; i<=num/2; i++)
			if(num%i==0) count++;

	 if(count == 0)  				// checking if prime
		 printf("   \t \t    a prime number");

	 else                                   	// if not prime
	    {  						// start of else
		i=0;
	       do
		 {
		    if (i%2 == 0)
			even += revnum[i] = num%10;
		    else odd += revnum[i] = num%10;
		    num = num/10;
		    i++;
		  } while(num!=0);

	       sum = even + odd;
	       if (revnum[0]%2 == 0)   			// divisible by 2
			printf("  \t \t    divisible by 2 \n");
	       else printf("  \t \tnot divisible by 2 \n");

	       if (sum%3 == 0)   			// divisible by 3
			printf("  \t \t    divisible by 3 \n");
	       else printf("  \t \tnot divisible by 3 \n");

	       if ((revnum[1] *10 + revnum[0])%4 == 0)  // divisible by 4
			printf("  \t \t    divisible by 4 \n");
	       else printf("  \t \tnot divisible by 4 \n");

	       if (revnum[0] == 0 || revnum[0] == 5)   	// divisible by 5
			printf("  \t \t    divisible by 5 \n");
	       else printf("  \t \tnot divisible by 5 \n");

	       if (revnum[0]%2 == 0 && sum%3 == 0)   	// divisible by 6
			printf("  \t \t    divisible by 6 \n");
	       else printf("  \t \tnot divisible by 6 \n");

// there is no quick test for finding out if a number is divisible by 7

	       if ((revnum[2]*100 + revnum[1]*10 + revnum[0])%8 == 0)
							// divisible by 8
			printf("  \t \t    divisible by 8 \n");
	       else printf("  \t \tnot divisible by 8 \n");

	       if (sum%9 == 0)   			// divisible by 9
			printf("  \t \t    divisible by 9 \n");
	       else printf("  \t \tnot divisible by 9 \n");

	       if (revnum[0] == 0 )   			// divisible by 10
			printf("  \t \t    divisible by 10 \n");
	       else printf("  \t \tnot divisible by 10 \n");

	       if (abs(even-odd) == 11 || even-odd == 0)
							// divisible by 11
			printf("  \t \t    divisible by 11");
	       else printf("  \t \tnot divisible by 11");
	  }  //end of else part

	getch();
	return 0;
}