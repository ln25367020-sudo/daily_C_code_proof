#include <stdio.h>

int main(void){
    int x;
    int y;
    printf("Enter x:");
    scanf("%d",&x);

    printf("Enter y:");
    scanf("%d",&y);

    char op;
    printf("Enter operator(eg.+,-):");
    scanf(" %c", &op);

    if(op == '+'){
        int sum = x + y;
        printf("Ans:%d", sum);
    }else if(op == '-')
    {
        int sub = x -y;
        printf("Ans:%d", sub);
    }else if (op =='*')
    {
        int multi = x * y;
        printf("Ans:%d", multi);
    }
    else if (op == '/')
    {
        if(y != 0){
            double div = (double)x /y;
            printf("Ans:%lf",div);
        }else{
            printf("Operation error!(zero division)");
        }
    }
    return 0;


}