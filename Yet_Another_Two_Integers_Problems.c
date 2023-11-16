#include <stdio.h>
#include<stdlib.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int a,b;
        scanf("%d%d",&a,&b);
        if(abs(a-b)%10!=0){
            printf("%d",abs(a-b)/10+1);
        }
        else{
            printf("%d",abs(a-b)/10);
        }
    }
    return 0;
}
