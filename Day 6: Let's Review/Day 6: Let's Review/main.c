#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void separate(char String[]);

int main() {
    int N;
    scanf("%d", &N);
    char word[10000] = " ";
    for (int i = 0; i < N; i++) {
        scanf("%s", word);
        separate(word);
    }
    
    return 0;
}

void separate(char String[]){
    char FirstWord[10000] = " ";
    char SecondWord[10000] = " ";
    for (int i = 0, j = 0, z = 0; i < strlen(String); i++) {
        if((i % 2) == 0){
            FirstWord[j] = String[i];
            j++;
        }
        else if ((i % 2) == 1){
            SecondWord[z] = String[i];
            z++;
        }
    }
    printf("%s %s\n", FirstWord, SecondWord);
}

