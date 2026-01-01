#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);
    int k,sum=0;
    while(n>0){
    k=n%10;
    sum=sum+k;
    n=n/10;
    }
    printf("%d\n",sum);
    
    return 0;
}
