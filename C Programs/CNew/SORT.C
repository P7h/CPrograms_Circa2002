

	//   PROGRAM FOR SORTING OF NUMBERS BY ANY LOGIC IN ASCENDING ORDER

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


	int main(void)
	{
	   int n, i, *num, choice = 1 ;
	   int sort_bubble(int *num, int n), sort_heap(int *num, int n), sort_insertion(int *num, int n) ;
	   int sort_quick(int *num, int , int),  sort_selection(int *num, int n),  sort_shell( int *num, int n) ;
	   clrscr();

	   printf("\n \t How many numbers u want to sort: ");
	   scanf("%d",&n);

	   num = (int *) malloc (n * sizeof (int));     //   with malloc function
	// num = (int *) calloc (n, sizeof (int));     //    with calloc function


	   printf("\n \t Enter numbers: \n");

	   for(i=0;i<n;i++)
		 { printf("\n \t \t num %d : ", i+1);
		   scanf("%d",&num[i]);  }


	    /*	printf("\n \n \n \t \t CHOOSE THE TYPE OF SORTING : \n ");
		printf("\n \t \t \t 1.  BUBBLE SORT      ");
		printf("\n \t \t \t 2.  HEAP SORT        ");
		printf("\n \t \t \t 3.  QUICK SORT       ");
		printf("\n \t \t \t 4.  SELECTION SORT   ");
		printf("\n \t \t \t 5.  INSERTION SORT   ");
		printf("\n \n \t \t Your Choice is : ");

		scanf("%d", &choice); */
		clrscr();

	   printf("\n\n\n\t\t\tUNSORTED LIST:  \n");

		for(i=0;i<n;i++)
			 { printf("%4d\t", num[i]); }

	      while(choice < 7)
	      {
		printf("\n \n \n \t \t CHOOSE THE TYPE OF SORTING : \n ");
		printf("\n \t \t \t 1.  BUBBLE SORT      ");
		printf("\n \t \t \t 2.  HEAP SORT        ");
		printf("\n \t \t \t 3.  INSERTION SORT   ");
		printf("\n \t \t \t 4.  QUICK SORT       ");
		printf("\n \t \t \t 5.  SELECTION SORT   ");
		printf("\n \t \t \t 6.  SHELL SORT       ");
		printf("\n \t \t \t 0.  EXIT    ");
		printf("\n \n \t \t Your Choice is : ");

		scanf("%d", &choice);
		clrscr();

		switch (choice)
		{
		  case 1:
			      //printf("\n \n \n \n \t     your choice was BUBBLE SORT ");
			       //getch();
				sort_bubble(num, n);
				break ;
		  case 2:
			      //printf("\n \n \n \n \t     your choice was HEAP SORT ");
				printf("\n\n\t\tSorry!!! - not yet completed\n");
				getch();
			      //sort_heap(num, n);
				exit(0) ;
		  case 3:
				//printf("\n \n \n \n \t     your choice was INSERTION SORT ");
				//getch();
				sort_insertion(num, n) ;
				break;
		  case 4:
			      //printf("\n \n \n \n \t     your choice was QUICK SORT ");
			      //getch();
				sort_quick(num, 0, n-1);
				break ;
		  case 5:
				//printf("\n \n \n \n \t     your choice was SELECTION SORT ");
				//getch();
				sort_selection(num, n) ;
				break;
		  case 6:
				//printf("\n \n \n \n \t     your choice was SHELL SORT ");
				//getch();
				sort_shell(num, n) ;
				break;
		  default :
				clrscr();
				printf("\n \n \n\n\n\n\t \t Sorry!! Wrong Choice, PROGRAM is exiting \n ");
				printf("\n \t \t \t \t  BYE BYE ");
				getch();
				exit (0);
		  }  // switch ends

	   for(i=0;i<n;i++)
		 { printf("\n \t \t \t \t %3d  ", num[i]); }

		 getch();
		 clrscr();
	   }
		getch();
		return 0;

	}      //end of "main" function



		//    FUNCTION FOR BUBBLE SORTING
//   LOGIC:   first element is checked with every other element in the list,
// if any smaller is found, then swapping and this is continued till entire list is sorted.

int sort_bubble(int *num, int n)
   {
		int temp, flag =0, i, j;
	   for(i=0;i<n-1;i++)
		 {
		   for(j=0;j<n-i-1;j++)
			  {
				if (num[j] > num[j+1]) // change this less than sign to
				  {	  //  greater than sign for descending order  of sorting
					temp = num[j];
					num[j] = num[j+1];
					num[j+1] = temp;
					flag = 1;
				  }
			  }
			  if(!flag)
				 break;
		 }

		printf("\n \n \tSORTED LIST AFTER BUBBLE SORTING: ");
		return 0;
	}




		//    FUNCTION FOR HEAP SORTING  not done yet

 int sort_heap(int *num, int n)
  {
		int i, j, temp;
	   for(i=0;i<n-1;i++)
		 {
		   for(j=0;j<n-i-1;j++)
			  {
				if (num[j] > num[j+1]) // change this less than sign to
				  {   //  greater than sign for descending order  of sorting
					temp = num[j];
					num[j] = num[j+1];
					num[j+1] = temp;
				  }
			  }
		 }

	   printf("\n \n \n \tSORTED LIST AFTER HEAP SORTING: \n");
	   return 0;
  }

   //    FUNCTION FOR INSERTION SORTING

int sort_insertion(int *num, int n)
   {
		int temp, i=0, j=0;

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
	return 0;
   }

	//    FUNCTION FOR QUICK SORTING  not yet done

int swap(int num[50], int i, int j)
   {
   int t;
   t = num[i];
   num[i] = num[j];
   num[j] = t;
   return 0;
   }

 int sort_quick(int *num, int left, int right)
  {
	  int i,last;

       if(left >= right)
	   return;

       swap(num,left,(left+right)/2);
       last=left;

       for(i=left+1;i<=right;i++)
	if(num[i] < num[left])
		swap(num,++last,i);
       swap(num,left,last);
	sort_quick(num,left,last-1);
	sort_quick(num,last+1,right);

	return 0;
   }


		//    FUNCTION FOR SELECTION SORTING
// LOGIC:  continuously adjacent elements are checked and if a smaller is found, then swapping
// and this process is continued for all adjacent elements, till entire list is sorted.

int sort_selection(int *num, int n)
   {

		int temp, i, j;
	   for(i=0;i<n-1;i++)
		 {
		   for(j=i;j<n-1;j++)
			  {
				if (num[i] > num[j+1]) // change this less than sign to
				  {  //  greater than sign for descending order  of sorting
					temp = num[i];
					num[i] = num[j+1];
					num[j+1] = temp;
				  }
			  }
		 }

	   printf("\n \n \n \tSORTED LIST AFTER SELECTION SORTING: \n");
	   return 0;
   }

   // FUNCTION FOR SHELL SORTING
   int sort_shell(int *num, int n)
   {
	 int temp, i, j, gap, flag;
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
	  } while (gap > 0);

	  return 0;
	}