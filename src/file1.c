int add(int number1, int number2){
     int result;
     result= number1 + number2;
     return result;
}
int main(){
    int num1, num2, sum;
    printf("Enters two numbers you wish to add:");
    scanf("%d %d",&num1,&num2);
    sum= add(num1, num2);    // function call
    printf("Additon is %d",sum);
    return 0;
}
