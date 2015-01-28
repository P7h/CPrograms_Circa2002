			
	//   PROGRAM FOR  SHELL SORTING OF NUMBERS IN ASCENDING ORDER

#include<stdio.h>
#include<conio.h>


	int main(void)
	{
	   int n, i, j, num[50], temp, flag = 0, gap;
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

	gap = n / 2;

	do {
		do {
			flag = 0;

			for (i = 0; i < n - gap; i++)
				if (num[i] > num[i + gap])
				{
					temp = num[i];
					num[i] = num[i + gap];
					num[i + gap] = temp;
					flag = 1;
				}
		   } while (flag);
	  gap /= 2;
	  } while (gap>0);

	   printf("\n \n \n \tSORTED LIST AFTER SHELL SORTING: \n");
	   for(i=0;i<n;i++)
		 { printf("\n \t \t \t %3d  ", num[i]); }
		getch();
		return 0;
	}

