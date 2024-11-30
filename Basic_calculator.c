#include <stdio.h>
int main(){
    float x,y,div,add,sub,mult;
    printf("Enter 2 numbers:");
    scanf("%f %f",&x,&y);
    
    add = x+y;
    sub = x-y;
    mult = x*y;
    div = x/y;

    printf("additon= %f\n",add);
    printf("subtraction= %f\n",sub);
    printf("multiplication= %f\n",mult);
    printf("division= %f\n",div);
    return 0;
    
}
