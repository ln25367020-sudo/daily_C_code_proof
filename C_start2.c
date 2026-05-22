#include <stdio.h>

int main(){
    int x;
    int y;
    printf("Enter x:");
    scanf("%d",&x);

    printf("Enter y:");
    scanf("%d", &y);


    int add = x + y;
    int sub = x - y;
    int multi = x * y;
    printf("The total is %d \n",add);
    printf("Substract is %d \n", sub );
    printf("Multiply is %d\n",multi);

    if(y !=0){
         double div = (double)x/y;
         printf("Division is %lf \n",div );
    }else{
        printf("Can not be divided by 0!!");
    }



    return 0;
}