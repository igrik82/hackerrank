#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int sum_hourglasses(int array[][6]);
int main(){
    int arr[6][6];
    for(int arr_i = 0; arr_i < 6; arr_i++){
        for(int arr_j = 0; arr_j < 6; arr_j++){
            
            scanf("%d",&arr[arr_i][arr_j]);
        }
    }

    int max_sum_hourglasses = sum_hourglasses(arr);
    
    printf("%d", max_sum_hourglasses);
    
    return 0;
}

int sum_hourglasses(int array[][6])
{
    int sum_hourglasses = 0;
    int max_sum_hourglasses = - INT_MAX;
    
    for (int y = 0; y < 4; y++){
        for (int x = 0; x < 4; x++){
            
            
            for (int i = y, a = 0; i < y + 3; i++, a++)
            {
                for (int j = x, b = 0; j < x + 3; j++, b++)
                {
                    if((a % 2 == 1) && (b % 2 == 1))
                    {
                        sum_hourglasses += array[i][j];
                    }
                    else if (a % 2 == 0)
                    {
                        sum_hourglasses += array[i][j];
                    }
                    else
                    {
                        continue;
                    }
                }
            }
            
            if(max_sum_hourglasses < sum_hourglasses)
            {
               max_sum_hourglasses = sum_hourglasses;
            }
            sum_hourglasses = 0;
            
        }
    }
    return max_sum_hourglasses;
}
