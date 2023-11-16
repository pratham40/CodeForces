int main()
{
    int n, k, l, c, d, p, nl, np;
    scanf("%d%d%d%d%d%d%d%d",&n,&k,&l,&c,&d,&p,&nl,&np);
    int a=k*l/nl;
    int b=p/np;
    int e=c*d;
    int min=a;
    if(b<min){
        min=b;
    }
    if(e<min){
        min=e;
    }
    printf("%d",min/n);
    return 0;
}
