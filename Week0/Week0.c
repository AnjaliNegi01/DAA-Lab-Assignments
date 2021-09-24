#include<stdio.h>
int main(){
int c;
printf("Enter the number of test cases: ");
scanf("%d",&c);
int j;
for(j=0;j<c;j++){
int n;
printf("Enter number of elements: ");
scanf("%d",&n);
int arr[n];
int i;
printf("Enter elements: ");
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
int k,t=0,f=0;
printf("Enter key element");
scanf("%d",&k);
for(i=0;i<n;i++){
    f++;
    if(arr[i]==k){
        t++;
        printf("Number of comparisons: %d\n",i);
    }
}
if(t==1){
    printf("Key element is present");
}
else{
    printf("Key element is not present");
}
//printf("\nNumber of comparisons: %d",f);
}
return 0;
}

