#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a>2){
        if(a%2==0){
            printf("YES");
        }
        else{
            printf("NO");
        }
    }
    else{
        printf("NO");
    }
    
    return 0;
}
