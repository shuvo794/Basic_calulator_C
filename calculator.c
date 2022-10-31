#include <stdio.h>

int main(){

    printf("Please give a input digit , ex (3,5)");

    float num1,num2,result;

    scanf("%f  %f",&num1,&num2); 
    
    result=num1+num2;

    printf("%.2f + %.2f=%.2f\n",num1,num2,result);
    
    result=num1-num2;
    
    printf("%.2f - %.2f=%.2f\n",num1,num2,result);
    
    result=num1*num2;
    
    printf("%.2f *  %.2f=%.2f\n",num1,num2,result);
    
    result =num1/num2;
    
    printf("%.2f / %.2f=%.2f\n",num1,num2,result);




    return 0;
}