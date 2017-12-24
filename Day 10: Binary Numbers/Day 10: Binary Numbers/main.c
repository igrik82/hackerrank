#include <stdio.h>
#define BIT 45

void to_bin(int decimal, int binary_array[]);
void max_consecutive(int binary_array[]);

int main()
{
    int decimal;
    scanf("%d",&decimal);
    int binary[BIT];
    to_bin(decimal, binary);
    max_consecutive(binary);
    
}

void to_bin(int decimal, int binary_array[])
{
    for(int i = BIT - 1; decimal > 0; --i)
    {
        binary_array[i] = decimal % 2;
        decimal /= 2;
    }
}

void max_consecutive(int binary_array[])
{
    int consecutive = 0;
    int max_consecutive = 0;
    for (int i = 0; i < BIT; i++){
        if (binary_array[i] == 1)
        {
            consecutive ++;
            if(consecutive > max_consecutive)
            {
                max_consecutive = consecutive;
            }
        }
        else if (binary_array[i] == 0)
        {
            consecutive = 0;
        }
        
    }
    printf("%d", max_consecutive);
}
