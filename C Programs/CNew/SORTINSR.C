
		//   PROGRAM FOR INSERTION SORTING OF NUMBERS IN ASCENDING ORDER

#include<stdio.h>
#include<conio.h>


	int main(void)
	{
	   int n, i, j, k, temp;
	   static int num[50];
	   clrscr();

	   printf("\n \t Enter how many numbers u want to sort: ");
	   scanf("%d",&n);

	   printf("\n \t Enter the numbers: \n");

	   for(i=0;i<n;i++)
		 { printf("\n \t \t %d : ", i+1);
		   scanf("%d",&num[i]);  }

	   clrscr();

//        printf("\n \n \n \t \t UNSORTED LIST: \n ");

//	   for(i=0;i<n;i++)
//		 { printf("\n \t \t \t %3d  ", num[i]); }

	for(i = 0 ; i < n-1 ; i++)
	{
		j=i;
		temp = num[i+1];
		while(temp < num[j])
		{
			num[j+1] = num[j];
			j--;
		}
		num[j+1] = temp;
	}


	   printf("\n \n \n \tSORTED LIST AFTER INSERTION SORTING: \n");

	   for(i=0 ; i<n ;i++)
		 { printf("\n \t \t \t %3d  ", num[i]); }

	   getch();
	   return 0;
	}