#include <stdio.h>
#include<stdlib.h>
int main()
{
   int n;
   scanf("%d",&n);
   int arr[n];
   int sum=0;
   for(int i=0;i<n;i++){
       scanf("%d",&arr[i]);
   }
   int max_wealth=arr[0];
   for(int i=0;i<n;i++){
       if(arr[i]>max_wealth){
           max_wealth=arr[i];
       }
   }
   for(int i=0;i<n;i++){
       sum+=max_wealth-arr[i];
   }
   printf("%d",sum);
    return 0;
}
