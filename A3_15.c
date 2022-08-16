//Assignment 3:Program 15//
/*W.A.P to create a file in binary mode with student information(name, roll, marks) and print the information 
for a student whose roll number is given as input.*/

#include <stdio.h>
#include<stdlib.h>
int main() {
	char name[50];
	int marks,rollno,i,n;
	printf("Enter number of students: ");
	scanf("%d",&n);
	FILE *fptr;
	fptr=(fopen("d.dat","w"));
	if(fptr==NULL) {
		printf("Error!");
		exit(1);
	}
	for (i=0;i<n;++i) {
		printf("For student%d\nEnter name: ",i+1);
        fflush(stdin);
		gets(name);
		//scanf("%s",&name);
        printf("Enter Roll No: ");
        fflush(stdin);
        scanf("%d",&rollno);
		printf("Enter marks: ");
		scanf("%d",&marks);
		
		fprintf(fptr,"\nName: %s \nRoll No: %d \nMarks=%d \n",name,rollno,marks);
	}
    
	fclose(fptr);
	return 0;
}