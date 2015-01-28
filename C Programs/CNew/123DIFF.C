
	//   PROGRAM FOR FINDING FIRST, SECOND && THIRD DIFFERENCES

#include<stdio.h>
#include<conio.h>

int main(void)
{
   int a[25], d1[25], d2[25], d3[25], i, n;
   clrscr();

   printf("\n \t Enter the no. of elements: ");
   scanf("%d", &n);

   printf("\n \t Enter the elements: \n");

   for(i=0;i<n;i++)
     scanf("%d", &a[i]);
   clrscr();

   printf("\n \n \t \t Entered Elements: \n");
   for(i=0; i<n;i++)
       printf("\t%d", a[i]);

   printf("\n \n \t \t FIRST DIFFERENCES: \n \t D1: ");
   for(i=0; i<(n-1);i++)
   {   d1[i] = a[i+1] - a[i];
       printf("\t%d", d1[i]);  }

   printf("\n \n \t \t SECOND DIFFERENCES: \n \t D2: ");
   for(i=0; i<(n-2);i++)
   {   d2[i] = d1[i+1] - d1[i];
       printf("\t%d", d2[i]);  }

   printf("\n \n \t \t THIRD DIFFERENCES: \n \t D3: ");
   for(i=0; i<(n-3);i++)
   {   d3[i] = d2[i+1] - d2[i];
       printf("\t%d", d3[i]);  }

   getch();
   return 0;
}



