
	//   PROGRAM FOR FINDING ARMSTRONG NUMBERS  BET' 2 NUMBERS

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(void)
{
   long ini, fin, nu, rem, i, j, rev=0;
   clrscr();

   printf("\n enter range for ARMSTRONG numbers ie intial and final numbers: ");
   scanf("%ld%ld",&ini,&fin);
   printf("\n \t \t \t ARMSTRONG NUMBERS \n");

/*   for (i=ini;i<=fin;i++)
		{  nu = i;    rev =0;
		while (nu>0)
			{
				rem  = nu%10;
				rev += rem * rem * rem;
				nu  /= 10;
			}
		if (rev == i)
		printf("\t %d", i);
		}*/

   for(j=1;j<=9;j++)
   { printf("\n \t To the Power %ld \n",j);
   for (i=ini;i<=fin;i++)
		{  nu = i;    rev =0;
		while (nu>0)
			{
				rem  = nu%10;
				rev += pow(rem,j);
				nu  /= 10;
			}
		if (rev == i)
		printf("\t %ld", i);
		}
   }

   getch();
   return 0;
}


	// LOGIC II for ARMSTRONG NUMBERS
/*int main(void)
{
  int i,sum;
  clrscr();
  int arm(int);

  printf("\nArmstrong numbers below 500 are...\n");
  for(i=1;i<500;i++)
     {
       sum=arm(i);
       if(sum==i)
       printf("\t  %d ",i);
     }
  getch();
  return 0;
}

int arm(int num)
 {

      int a[3],j=0,n;
      int sum=0;
      while(num>0)
      {	 a[j++]=num%10;
	 num/=10;   }

      n=--j;
       for(j=0;j<=n;j++)
	   sum+=pow(a[j],3);
     return(sum);

     }   */



/*		// PROGRAM FOR CHECKING WHETHER A NUMBER IS ARMSTRONG OR NOT
		//  logic is: 153 = 1*1*1 + 5*5*5 + 3*3*3

int main(void)
{
   int num,rem,nu,rev=0;                                           
   clrscr();
   
   printf("\n enter a number to check if it is Armstrong: ");
   scanf("%d",&num);
   nu = num;

   while(nu>0)
   {
	rem  =  nu%10;
	rev += rem * rem * rem;
	nu  /= 10;
   }

	if (rev == num)
		printf("%d is an ARMSTRONG number",num);
	else
    	printf("\n %d is not an ARMSTRONG number",num);

	getch();
	return 0;

}  */



	