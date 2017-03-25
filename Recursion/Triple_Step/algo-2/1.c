#include<stdio.h>
int findStep(int);
int main(){
    int n;
    int ways=0;
    scanf("%d",&n);
    ways = findStep(n);
    printf("%d\n",ways);
return 0;
}
int findStep(int n){
    int t1,t2,t3;
    if(n==1 || n==0){
        return 1;
    }else if(n==2){
        return 2;
    }
    else{
        t3 = findStep(n-3);
        t2 = findStep(n-2);
        t1 = findStep(n-1);
        return t1+t2+t3;
    }
}
