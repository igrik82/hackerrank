#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int N;
    scanf("%d",&N);
    
    (N % 2 == 1)? printf("Weird") : (N >= 2 && N <=5) ?
                    printf("Not Weird") : (N >= 6 && N <=20) ?
                    printf("Weird") : printf("Not Weird");
    return 0;
}
