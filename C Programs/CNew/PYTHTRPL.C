
	//   PROGRAM FOR PYTHAGOREAN TRIPLETS
	//   LIKE 3, 4 && 5

#include<stdio.h>
#include<conio.h>

int main(void)
{
   long i, j, k=0, l=0;
  // FILE *f = fopen("Pyttrip.txt","w");
   clrscr();

  for(i=1; i<=500; i+=2)
    {
      for(j=i+1; j<=100000; j+=2)
      {
	 k = j+1;

	 if( i*i + j*j == k*k)
	 {
	printf("\t %6luý    +  %6luý     ð %8luý \n", i, j, k); l++;
	 //  fprintf(f,"\n %4lu \t %6lu   \t  %8lu", i, j, k);
	   if(l==23)
	    { l=0;getch();  }
	   break;
	 }
	 else continue;

      }
    }
//    fclose(f);
    getch();
    return 0;
  }