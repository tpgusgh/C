#include<stdio.h>
int main(){
    int a,b,c,s;
    scanf("%d %d %d",&a,&b,&c);
    while(b){
        s = a % b;
        a = b;
        b = s;
    }
    while(a){
        s = c % a;
        c = a;
        a = s;
    }
    printf("%d",c);
}
