	// PROGRAM FOR SORTING BY QUICK SORT ALGORITHM

int swap(int num[50], int i, int j)
   {
   int t;
   t = num[i];
   num[i] = num[j];
   num[j] = t;
   return 0;
   }

   int qsort(int num[50], int left, int right)
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
	qsort(num,left,last-1);
	qsort(num,last+1,right);
	return 0;
       }

	int main(void)
	   {
	   static int num[50];
	   int i, n;
	   clrscr();

	   printf("\n \n \t \t Enter the number of values: ");
	   scanf("%d", &n);

       for (i=0; i<n; i++)
	 scanf("%d",&num[i]);

       qsort(num, 0, n-1);

	    printf("\n \n \t After QUICK SORTING, the values are : \n");
		for (i=0; i<n; i++)
		  printf("\t %d", num[i]);

	  getch();
	  return 0;
   }