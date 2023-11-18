#include<stdio.h>
 
int main(){
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    
    if ((a < b+c && b < a+c && c < a+b) || (a < b+d && b < a+d && d < a+b) || (a < d+c && d < a+c && c < a+d) || (d < b+c && b < d+c && c < d+b)){
        printf("TRIANGLE");
    }
     else if ((a == b+c || b == a+c || c == a+b) || (a == b+d || b == a+d || d == a+b) || (a == d+c || d == a+c || c == a+d) || (d == b+c || b == d+c || c == d+b)){
         printf("SEGMENT");
     }
     else{
         printf("IMPOSSIBLE");
     }
     return 0;
}
