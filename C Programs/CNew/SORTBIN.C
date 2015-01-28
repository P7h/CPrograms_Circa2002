			//	incomplete...not as yet finished
	//   PROGRAM FOR  BINARY SORTING OF NUMBERS IN ASCENDING ORDER

#include<stdio.h>
#include<conio.h>


	int main(void)
	{
	   int n, i, j, num[50], temp, flag = 0, high, low;
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
	high = n;
	low = 0;

	mid = (high + low) / 2;

	while ((! found) && (high >= low))
	{
		if (value == num[mid])
			found = 1;
		else if (value < num[mid])
			high = mid - 1;
		else
			low = mid + 1;

		mid = (high + low) / 2;
	}

	   printf("\n \n \n \tSORTED LIST AFTER BINARY SORTING: \n");
	   for(i=0;i<n;i++)
		 { printf("\n \t \t \t %3d  ", num[i]); }
		getch();
		return 0;
	}

