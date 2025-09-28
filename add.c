#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void adds(int *list1,int i,int ii,int iii,int iiii){
    int n=list1[0];
    n++;
    
    list1[n]=i;
    n++;
    list1[n]=ii;
    n++;
    list1[n]=iii;
    n++;
    list1[n]=iiii;
    list1[0]=n;

}

void copys(int *list1,int *list2){
    int i=list2[0];
    int n=0;
    i++;
    for(n=0;n<i;n++)list1[n]=list2[n];


}

void printn(int *l1){
    printf("%d ,%d ,%d ,%d \n",l1[0],l1[1],l1[2],l1[3]);

}
void print(int *list1){
    int i=list1[0]/4;
    int n=0;
    for(n=0;n<i;n++)printn(list1+(n*4+1));
}

int main(){
    int i=0;
    
    int list1[4096]={0};
    printf("\033c\033[43;30m\nnumbers\n");
    
    for(i=0;i<30;i++)adds(list1,i*5,i*5+1,i*5+2,i*5+3);
    printf("\n\n");
    print(list1) ;
    return 0;
}
