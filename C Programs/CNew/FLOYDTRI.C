

	// PROGRAM FOR FLOYD TRAINGLE  WITH 1 & 0's

#include<stdio.h>
#include<conio.h>

/*int main(void)
{
int n,p=0,i,j;
clrscr();

printf("\n Number of rows for FLOYD TRIANGLE (<28): ");
scanf("%d",&n);
printf("\n\n");

	for(i=1;i<=n;i++)
	   {  if(i%2!=0)
		p=!p;
	      for(j=1;j<=i;j++)
		 {   p=!p; printf("%d  ",!p);
		 }   printf("\n");
	   }

getch();
return 0;
}    */

	//Different Logic:  PROGRAM FOR FLOYD TRIANGLE WITH 1 & 0 's 

/*int main(void)
    {
      int i,j,a,k;
      clrscr();
      printf("Number of rows for FLOYD triangle (<28):  ");
      scanf("%d",&a);

	  for(i=0;i<a;++i)
	   {
	    for(j=0;j<=i;++j)
	     {
		  if((i==j)||((i-j)%2==0))
		  {
		   k=1;
		   printf("%d  ",k);
		  }

		  else
		 {
		  k=0;
		   printf("%d  ",k);
		 }
	     }  printf("\n");
	   }
	   getch();
	   return 0;
	}  */


	//  PROGRAM FOR FLOYD TRIANGLE with ASCENDING NUMBERS

int main(void)
{
int n,p=0,i,j;
clrscr();

printf("\n Number of rows for Floyd Triangle (<17): ");
scanf("%d",&n);
printf("\n\n\n");

	for(i=1;i<=n;i++)
	   { for(j=1;j<=i;j++)
	      {   printf("%5d",++p);
	      }   printf("\n");
	   }

getch();
return 0;
}



