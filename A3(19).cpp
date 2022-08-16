//Assignment 3:Program 19//

#include<stdio.h>
typedef union
{
 float s;
 int emp;
}EMPLOYEE;
typedef struct
{
 float sal;
 int em;
}EMP;
int main()
{
 EMPLOYEE e;
 EMP e1;
 printf("enter employee salary by union");
 scanf("%f",&e.s);
 printf("enter employee id by union");
 scanf("%d",&e.emp);
 printf("enter employee salary by structure");
 scanf("%f",&e1.sal);
 printf("enter employee id by structure");
 scanf("%d",&e1.em);
 printf("%d",sizeof(e));
 printf("\n%d",sizeof(e1));
 return 0;
}
