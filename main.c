#include<stdio.h>
#include<stdlib.h>
int main(){
    srand(time(NULL));
    int randomNumber = rand() %100 ;
    printf("%d\n", randomNumber);


    return 0;
}