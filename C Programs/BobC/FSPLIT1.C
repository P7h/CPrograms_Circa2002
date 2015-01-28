/******************************
 ******	Fsplit 1.0 ************
 ******************************/


/* include the necessary header files */
#include<dos.h>
#include<dir.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<fcntl.h>
#include<io.h>
#include<sys/stat.h>

main()
{
	/* FILE pointer to batch file used for merging the obtained parts */
	FILE *f;

	/* this structure is used to find whether the file exists or not 
	   and to find its total size */
	struct ffblk file_info;

	char name[80], *buffer, pname[80], dig[4], fname[80], *ptr;
	long size, psize;
	/* psize holds the size of each part */

	int chunck = 1024, times, parts, left, i, j, source, target, len;

	/* set file access mode to binary */
	_fmode = O_BINARY;

	/* get name of the file from the user */
	printf("Enter the name of file to split : ");
	scanf("%s",name);

	if (findfirst(name, &file_info, FA_DIREC) != 0)
	{
		/* if file to split is not found then display error message and quit */
		printf("Error accessing %s\n",name);
		exit(1);
	}
	
	/* get file size from ffblk structure */
        size = file_info.ff_fsize;

	printf("Size of %s is %ld bytes ",name,size);
	printf(" = %0.2f Kb = %0.2f Mb\n",(float)size/1024,(float)size/1024/1024);

	/* accept number of parts */
	printf("Enter number of parts : ");
	scanf("%d",&parts);

	if (parts < 2 || parts > 999)
	{
		printf("Check the number of parts and restart again\n");
		exit(1);
	}

	/* find out the size of each part */
	psize = (long) size / parts;

	/* if size of each part is less than 1024 make chunk size to part size */
	if (psize <= chunck)
		chunck = psize;
	
	/* find the number of iterations */
	times = psize / chunck;

	/* find the number of bytes left out in each part when copying them in chunks 
	   for example if part size is 2050 bytes then in first iteration 1024 bytes and in
	   the next iteration another 1024 bytes are copied. The remaining 2 bytes are to 
	   be copied seperately */
	left = psize - times*chunck;

	/* open source file in read mode */	
	source = open(name, O_RDONLY|O_BINARY, 0);
	if (source == -1)
	{
		printf("Error opening %s\n",name);
		exit(1);
	}

	/* initialize buffer */
	buffer = (char *) malloc(chunck);
	if (buffer == NULL)
	{
		printf("Insufficient memory\n");
		exit(1);
	}

	/* find the absolute file name from the path name */
	ptr = strrchr(name,'\\');
	if (ptr != NULL)
	{
		ptr++;
		strcpy(fname,ptr);
	}
	else
		strcpy(fname, name);

	/* find the position at which . is present in the file name */
	ptr = strstr(fname,".");
	if (ptr != NULL)
		*(ptr + 1) = '\0';
	else
		strcat(fname,".");
	
	/* pname holds the individual part name */
	strcpy(pname,fname);

	/* fname has the name of the batch file */
	strcat(fname,"bat");
	
	f = fopen(fname,"w");
	if (f == NULL)
	{
		printf("Error opening batch file\n");
		exit(1);
	}
	strcpy(fname,pname);
	fprintf(f,"COPY /b ");
	for(i = 1; i <= parts; i++)
	{
		
		strcpy(pname,fname);
		sprintf(dig, "%0.3d",i);
		strcat(pname,dig);
		printf("%s\n",pname);
		fprintf(f,"%s",pname);
		if (i < parts)
			fprintf(f," + ");
		
		target = creat(pname, S_IWRITE);
		if (target < 0)
		{
			printf("Error creating split file\n");
			exit(1);
		}
		if (i < parts)
		{
			for(j = 1;j <=times; j++)
			{
				len = read(source, buffer, chunck);
				if (write(target, buffer, chunck) < 1)
					break;
			}
			len = read(source, buffer, left);
			write(target, buffer, len);
		}
		else
			while((len = read(source, buffer, chunck)) > 0)
				if(write(target, buffer, len) < 1)
					break;
		close(target);
	}

	ptr = strrchr(name,'\\');
	if (ptr != NULL)
		fprintf(f," %s\n",ptr+1);
	else
		fprintf(f," %s\n",name);
	fclose(f);

	close(source);
	free(buffer);

	printf("\nProgrammed by G.V.S.V.Kishor Babu\n3/4 B.Tech\nComputer Science and Systems Enginnering\nA.U.College of Engineering\n");
	printf("E-mail : fsplit@gkishor.com\n");
}