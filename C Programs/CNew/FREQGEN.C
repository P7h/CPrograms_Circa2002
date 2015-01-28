
	//   PROGRAM FOR FREQUENCY GENERATION OF NUMBERS FOR HISTOGRAMS

#include<stdio.h>
#include<conio.h>

int main(void)
{
   int data[100], min, max, i, n;
   static freq[25];
   clrscr();

   printf("\n \t Enter the no. of elements: ");
   scanf("%d", &n);

   printf("\n \t Enter the elements: \n");
   for(i=0;i<n;i++)
     scanf("%d", &data[i]);
   clrscr();

   min = max = data[0];
   printf("\n \n \t \t Entered Elements: \n");

   for(i=0; i<n;i++)
      {  printf("%d\t", data[i]);
	 freq[data[i]] = freq[data[i]] + 1;
		 if(data[i]>max)
			max=data[i];
		 else if(data[i]<min)
			min=data[i];     }

    printf("\n \n \n \t The smallest element is %d", min);
    printf("\n \n \t The biggest element is %d", max);

   printf("\n \n \t \t Frequency of Occurence: \n");
    for(i=min; i<=max; i++)
    {  if(freq[i] != 0)
	  printf("\n \t \t    %3d  ---  %3d", i, freq[i]);  }



   getch();
   return 0;
}



