//Assignment 3:Program 20//

#include<stdio.h>
typedef struct
{
 int acno;
 float acbal;
}CUSTOMER;
CUSTOMER update(CUSTOMER c);
int main()
{
 CUSTOMER c;
 printf("enter the customer account number ");
 scanf("%d",&c.acno);
 printf("enter customer account balance ");
 scanf("%f",&c.acbal);
 c=update(c);
 printf("updated balance is :%f",c.acbal);
 return 0;
}
CUSTOMER update(CUSTOMER c)
{
 c.acbal=c.acbal+((0.1)*(c.acbal));
 return c;
}
