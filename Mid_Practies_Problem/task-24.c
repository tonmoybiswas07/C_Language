// Check whether a number is divisible by 5
#include<stdio.h>
int main(){
    int number;

    printf("Enter number:");
    scanf("%d",&number);

    if(number%5==0){
        printf("Number is divisible by 5\n");
    }else{
        printf("Number is not divisible by 5\n");
    }
    return 0;
}