

			//   PROGRAM FOR SELECTION SORTING OF NUMBERS IN ASCENDING ORDER

#include<stdio.h>
#include<conio.h>


	int main(void)
	{
	   int n, i, j, num[50], temp;
	   clrscr();

	   printf("\n \t Enter how many numbers u want to sort: ");
	   scanf("%d",&n);

	   printf("\n \t Enter the numbers: \n");

	   for(i=0;i<n;i++)
		 { printf("\n \t \t %d : ", i+1);
		   scanf("%d",&num[i]);  }

	   clrscr();

	   printf("\n \n \n \t \t UNSORTED LIST: \n ");

	   for(i=0;i<n;i++)
		 { printf("\n \t \t \t %3d  ", num[i]); }

	   for(i=0;i<n-1;i++)
		 {
		   for(j=i;j<n-1;j++)
			  {
				if (num[i] > num[j+1]) // change this less than sign to 
				  {					  //  greater than sign for descending order  of sorting
					temp = num[i];
					num[i] = num[j+1];
					num[j+1] = temp;
				  }
			  } 
		 }


	   printf("\n \n \n \tSORTED LIST AFTER SELECTION SORTING: \n");

	   for(i=0;i<n;i++)
		 { printf("\n \t \t \t %3d  ", num[i]); }

	   getch();
	   return 0;
	}

