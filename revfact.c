#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void findFact(int x);

int main (){

    int x;

    printf("Please enter an integer to find if it has a factorial: ");
    scanf("%d", &x);

    findFact(x);

    return 0;

}

void findFact(int x){
    
    int fact=x, i=1;
    
    while(fact>1){
        i++;
        fact/=i;
    }
    
    if(fact==1){
        printf("%d = %d!\n", x, i);
    }else{
        printf("%d   NONE\n", x);
    }
}