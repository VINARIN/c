#include<stdio.h>

int add(int number1, int number2){
     int result;
     result= number1 + number2;
     return result;
}
int main(){
    int number1, number2, result;
    printf("Enters two numbers you wish to add:");
    scanf("%d %d",&number1,&number2);
    result = add(number1, number2);    // function call
    printf("Addition is %d",result);
    return 0;
}