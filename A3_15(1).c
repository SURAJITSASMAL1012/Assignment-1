 // Assignment 3:Program15 5
 /*Write a program to create a file in binary mode with student information(name,
 roll, marks) and print the information for a student whose roll number is given as input*/

 #include<stdio.h>
typedef struct
{
 int r,m;
 char name[50];
}STUDENT;
void main()
{
 int n,i,k;
 STUDENT s[6],s1[6],roll;
 FILE *fp;
 fp=fopen("student.dat","wb+");
 printf("enter the number of student:");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
 printf("enter %dth student information",i);
 printf("\nenter the student name:");
 fflush(stdin);
 gets(s[i].name);
 printf("enter roll number:");
 scanf("%d",&s[i].r);
 printf("enter marks:");
 scanf("%d",&s[i].m);
 }
 fwrite(&s,sizeof(s),n,fp);
 rewind(fp);
 fread(&s1,sizeof(s1),n,fp);
 printf("enter the roll no whose info you want:");
 scanf("%d",&roll.r);
 for(i=1;i<=n;i++)
 {
 if(s1[i].r==roll.r)
 k=i;
 }
  printf("student name=%s\nstudent roll=%d\nstudent marks=%d",s1[k].name,s1[k].r,s1[k].m);
fclose(fp);
}
