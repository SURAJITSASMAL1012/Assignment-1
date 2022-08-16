//Assignment 2:program 3//
//Mean,mode,standard deviation//

#include<stdio.h>
#include<limits.h>
#include<math.h>

int main(){
	int n;
	printf("Enter the size of the array:");
	scanf("%d", &n);
	printf("Enter the values:\n");
	int arr[n], max = INT_MIN, total=0;
	int i;
	
	for(i=0;i<n;i++){
		scanf("%d", &arr[i]);
		if( arr[i] > max)
			max= arr[i];
		total+= arr[i];
	}
	//mean
	float mean =(float)total/n;
	printf("Mean = %f \n", mean);

	//mode
	int count[max+1], max_count=0, mode=0;
	
	for(i=0; i<max+1; i++)
		count[i]=0;
	for(i=0; i<n;i++){
		count[arr[i]]++;
		if( count[arr[i]] > max_count){
			max_count=count[arr[i]];
			mode = arr[i];
		}
	}
	printf("Mode = %d \n", mode);

	//sd
	int sd=0;
	for(i=0; i<n; i++){
		sd+= pow(arr[i] - mean, 2); 
	}
	printf("Standard Deviation(Sd) = %f", (float)sqrt(sd/n));

	return 0;
}

