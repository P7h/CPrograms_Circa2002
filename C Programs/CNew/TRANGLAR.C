

	//   PROGRAM FOR FINDING WHETHER A MATRIX IS A DIAGONAL MATRIX or NOT

#include<stdio.h>
#include<conio.h>

int main(void)
{
   int n, row, column;
   int lowertri = 0, uppertri =0;
   int mat[10][10];
   clrscr();

   printf("\n \t Enter the no. of rows of the matrix: ");
   scanf("%d", &n);

   printf("\n \t Enter the elements: \n");
   for(row=0; row<n; row++)
     for(column=0; column<n; column++)
	     scanf("%d", &mat[row][column]);
   clrscr();

   printf("\n \n \t Entered Square matrix: \n\t");
   for(row=0; row<n; row++)
	{  for(column=0; column<n; column++)
	     {  printf("\t %d", mat[row][column]); }
	     printf("\n\t");  }

   for(row=0; row<n-1; row++)      //check for lower triangular matrix
	{  for(column=row+1; column<n; column++)
	     {    if(mat[row][column])
		     break;   }  column--;
	     if(mat[row][column])
		break;
	}
  if(row == n-1)
      lowertri = 1;

   for(row=1; row<n; row++)         //check for upper triangular matrix
	{  for(column=0; column<row; column++)
	     {    if(mat[row][column])
		     break;   }  column--;
	     if(mat[row][column])
		break;
	}
  if(row == n)
      uppertri = 1;

  if(lowertri && uppertri)
     printf("\n \n \t The matrix is a DIAGONAL Matrix ");
  else
   {
     if(lowertri)
	printf("\n \n \t \t The matrix is a LOWER TRIANGULAR Matrix ");
     else
      {
	  if(uppertri)
		printf("\n \n \t \t The matrix is an UPPER TRIANGULAR Matrix ");
	  else
		printf("\n \n \t \t The given matrix is not a special type of matrix ");
      }
   }

   getch();
   return 0;
}