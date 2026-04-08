#include<stdio.h>
void main(){
    int i;
    int a[6]={2,7,13,68,25,3};
    int *p=&a[5];
    for(i=6;i>0;i--){
        printf("array index:%d value:%d\n",i,*p);
        p--;
    }
}
