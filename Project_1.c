#include<stdio.h>
#include<stdlib.h>

int main(){
    int rando=rand()%(90-30+1)+30;
    int n;
    int count=0;
    scanf("%d",&n);
    while(n!=rando){
        if(n>rando){
            printf("try lower");
            scanf("%d",&n);
        }
        else if(n<rando){
            printf("try higher");
            scanf("%d",&n);

        }

    }

    if (n== rando) printf("correct\n");
}