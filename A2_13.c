//Assignment 2:Program 13//
//Take two 2D Array ,sort these tw arrays,finally store the sum of these two array//

#include<stdio.h>
int main(){
	int r,c,i,j,n,count=0;
   	printf("Enter the number of rows:");
   	scanf("%d",&r);
   	printf("Enter the number of columns:");
   	scanf("%d",&c);
   	n=r*c;
		int a[r][c], b[r][c], d[r][c], x[n], y[n];
  			printf("PLease enter the elements for First Matrix:\n");
	for(i=0;i<r;i++){
 		for(j=0;j<c;j++){
 			scanf("%d",&a[i][j]);}
			} 
  			printf("Please enter the elements for Second Matrix:\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
  			scanf("%d", &b[i][j]);
			}
		}
	for(i=0;i<c;i++){
		for(j=0;j<c;j++){x[count]=a[i][j];count++;}
		}
	int count2=0;
	for(i=0;i<c;i++){
		for(j=0;j<c;j++){y[count2]=b[i][j];count2++;}
	}
	sort(x,n);
	sort(y,n);
	int n1=0;
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){d[i][j]=x[n1]+y[n1];n1++;}
	}
    printf("The sum of the matrix:\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
  		printf("%d ",d[i][j]);
	}
	printf("\n");
	}
}
     
	int sort(int mat[], int num ){
	int i,j,temp;
	for (i = 0; i < num; ++i){
		for (j = i + 1; j < num; ++j){
    		if (mat[i] > mat[j]){
			temp =  mat[i];
			mat[i] = mat[j];
			mat[j] = temp;}
		}
	}
		printf("The numbers arranged in ascending order are given below:- \n");
		for (i = 0; i < num; ++i)
 			printf("%d\n", mat[i]);
 	return 0;
}
