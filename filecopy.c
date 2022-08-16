//Assignment 3:Program 18//
/* A program "filecopy.c" to copy one file to another file. Design the program in such a way that 
it can accept command line arguments.*/


#include <stdio.h>


int main(int argc, char *argv[]) 
{
  FILE
    *fptr1,
    *fptr2;

  int i;
  char ch;

  printf("Total number of argument passed: %d\n", argc);

  // open source file in read mode
  if( (fptr1 = fopen(argv[1], "r") ) == NULL ) {

    printf("Error...\nCannot open file: %s\n", argv[1]);
    printf("Either the filename is incorrect or it does not exists.\n");

    return -1;

  }

  if( (fptr2 = fopen(argv[2], "r") ) != NULL) {

    printf("Warning: File %s already exists.\n", argv[2]);
    printf("Press Y to overwrite. Or any other key to exit: ");
    
    
    ch = getchar();

    if(ch != 'Y' && ch != 'y') {
        
      printf("Terminating the copy process.\n");

      fclose(fptr1);
      fclose(fptr2);
      
      return -1;

    }
    else {
      fclose(fptr2);
      
      fptr2 = fopen(argv[2], "w");
    }

  }
  else {
    fptr2 = fopen(argv[2], "w");
  }

  while( !feof(fptr1) ) {
    ch = getc(fptr1);
    if(ch != EOF) {
      putc(ch, fptr2);
    }
  }

  
  fclose(fptr1);
  fclose(fptr2);

  printf("Content of %s copied to %s\n", argv[1], argv[2]);

  return 0;
}




/*#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
FILE *fs,*ft;
int ch;
if(argc!=3)
{
printf("Invalid number of arguments.");
exit (0);
}
fs=fopen(argv[1],"r");
if(fs==NULL)
{
printf("Can't find the source file.");
return 1;
}
ft=fopen(argv[2],"w");
if(ft==NULL)
{
printf("Can't open target file.");
return 1;
}
while(1)
{
ch=fgetc(fs);
if (feof(fs)) 
break;
fputc(ch,ft);
}
fclose(fs); 
fclose(ft);
return 0; 
}*/