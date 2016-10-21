#include<stdio.h>
#include<stdlib.h>
    
void getZeck(int n, int max, int sum);
    
int main(){
    int i, n, max;
    int sum=0;
        
    scanf("%d", &n);
    
    int x[n];
    
    for(i=0; i<n; i++)
        scanf("%d", &x[i]);
    for(i=0; i<n; i++){
        printf("%d =", x[i]);
        max = x[i];
        getZeck(x[i], max, sum);
    }
    return 0;
}

void getZeck(int n, int max, int sum){
    int i, newN;
    int *fib, *temp;

    fib=malloc(sizeof(int));
    
    fib[0]=0;
    fib[1]=1;

    for(i=2;;i++){
        fib[i]=fib[i-1]+fib[i-2];
        if(fib[i]>n)
            break;
        temp=realloc(fib,(i+2)*sizeof(int));
        if(temp != NULL){
            fib=temp;  
        }else{
            free(fib);
        }
    }

    newN=n-fib[i-1];
    sum+=fib[i-1];
    if(sum<max){
        printf(" %d +", fib[i-1]);
        free(fib);
        getZeck(newN, max, sum);
    }else{
        printf(" %d\n",fib[i-1]);
        free(fib);
    }
}
