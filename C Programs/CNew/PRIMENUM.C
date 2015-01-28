

			//   PROGRAM for PRIME NUMBERS using the logic of SIEVE OF ERATOSTHENES 

#include<stdio.h>
#include<conio.h>
#include<alloc.h>

int main(void)
	{
	   int i, j, *num, n;
	   clrscr();

	   printf("\n Enter the number upto which u want PRIMES: ");
	   scanf("%d", &n);

	   num = (int *) malloc (n * sizeof (int));     //   with malloc function
	// num = (int *) calloc (n, sizeof (int));     //    with calloc function
	   
	   for (i=1; i<=n; i++)
			num[i] = i;


	   for (i=2; i<=n; i++)
		   {  for (j=2; j<i; j++)
				 {    if (i%j == 0)
						{   num[i] = 0; break; }
				  }
		   }


		j=0;
	   for (i=2; i<=n; i++)
			{  
			   if (num[i] != 0)
			   {  printf("%d\t",num[i]); j++; }

			   else continue;
			}
			printf("\a \n \t \t No. of PRIMES bet' 1 and %d are %d \a", n, j);

			getch();
			return 0;

	   }    
/* ----------------------------------------------------------------------------------------------------------------------------------------  */

				// PROGRAM FOR PRIMES WITH USUAL LOGIC

/*  int main(void)    
{
  int n,count,countn=0,i,j;
  clrscr();

  printf("\n enter the number upto which u want PRIMES: ");
  scanf("%d",&n);

  for(i=2;i<=n;i++)
	 { count=0;
	   for(j=2;j<=i/2;j++)
	   {  if(i%j==0)
			 { count++;  break; }
	       else continue; 
	   }
	   if (count==0)
	   {  printf("%d  \t",i); countn++; }
	  }
	printf("\n \n \a No. of primes bet' 1 and %d are %d \a",n,countn);
   getch();
   return 0;
}  */ 


/* ----------------------------------------------------------------------------------------------------------------------------------------  */

	//   PROGRAM FOR FINDING WHETHER A NUMBER IS PRIME OR NOT

/* LOGIC IS let p be a number. find a whole num just > the sqrt of p.
		let k > sqrt(p); Test whether p is divisible by any prime num < k.
		if yes, then p is not a prime. otherwise, p is a prime.      */

/*

#include<math.h>
#include<stdio.h>
#include<conio.h>


	int main(void)
	{
	  int i, j, num, sqr, k=0, prime[50], count = 0;
	  clrscr();

	  printf("\n Enter any number for testing whether it is PRIME or not: ");
	  scanf("%d", &num);

	  sqr = (int) (sqrt(num));
	  sqr += 1;

  for(i=2;i<=sqr;i++)
	 { count=0;
	   for(j=2;j<=i/2;j++)
		{    if(i%j==0)
		   { count++;  break; }
		 else continue;
		}
	   if (count==0)
	   {  prime[k++] = i; }
	  }

	  count = 0;
	  for(i=0; i<k; i++)
		{	if (num%prime[i]==0)
		   { count++; break; }
		else continue;
		}

	  if (count==0)
		printf("\n \t \t %d is a PRIME number", num);
	  else
		printf("\n \t \t %d is not a PRIME number", num);

	  getch();
	  return 0;
	 }    */


/* ----------------------------------------------------------------------------------------------------------------------------------------  */