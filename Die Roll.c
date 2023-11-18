#include<stdio.h>
 
int main(){
    int x,y;
    scanf("%d%d",&x,&y);
    
    int max = (x > y) ? x : y;
    int c=6+1-max;
    
    int d=6;
    if(c==6){
        c/=6;
        d/=6;
    }
    else if(c==4){
        c/=2;
        d/=2;
    }
    else if(c==3){
        c/=3;
        d/=3;
    }
    else if(c==2){
        c/=2;
        d/=2;
    }
     printf("%d/%d\n", c, d);
    
    return 0;
}
