//Assignment 3:Program 11//
//Average and Median of a list of numbers Using dynamic memory allocation//

#include<stdio.h>
#include<stdlib.h>
int main(){
	int* ptr;
	int i,j,n;
	float sum=0;
	float average;
	printf("Enter the number of elements to be stored: ");
	scanf("%d",&n);
	printf("Entered number of elements are: %d\n",n);
	ptr= (int*) malloc(n * sizeof(int));
	if (n == 0){
		printf("Memory not allocated!");
	}
	else if (n!=0){printf("Memory successfully Allocated using malloc().\n");
	printf("Enter the elements: \n");
	for (i=0;i<n;++i){
		printf("Enter element %d : ",i);
		scanf("%d",(ptr+i));
		sum+= *(ptr+i);	
	}
	printf("The elements of the array are: ");
	for (j=0;j<n;++j){
		printf("%d, ",*(ptr+j));	
	}
}	
	average= sum/n;
	printf("\nThe average is: %.2f\n",average);
	
	int k,l;
	int temp=0;
	for (k=0;k<n-1;k++){
		for (l=0;l<n-k-1;l++){
			if(ptr[l]<ptr[l+1]){
			temp= ptr[l];
			ptr[l]=ptr[l+1];
			ptr[l+1]=temp;
		}
	}
}
	float median;
	if (n%2==0){
		median=((ptr[(n/2)-1]+ptr[(n/2)])/2);
	}
	else median= ptr[(n/2)];
	
	printf("Median is: %.2f",median);
	return 0;
}
