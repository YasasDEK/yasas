#include<stdio.h>
#include<conio.h>
main(){
	float a[20],n,psum=0,nsum=0;
	int i;
	printf("Enter the limit : ");
	scanf("%f",&n);
	printf("\nEnter the elements : \n\n");
	for(i=0;i<n;i++)
	scanf("%f",&a[i]);
	for(i=0;i<n;i++){
		if(a[i]>0)
		psum=psum+a[i];
		if(a[i]<0)
		nsum=nsum+a[i];
	}
	printf("\nSum of positive elements is : %d,psum");
	printf("\nSum of negative elements is : %d,nsum");
int ave=(psum+nsum)/n; 
printf("\naverage of elements is : %f",ave);


}

