#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

struct phone_book
{
    char name[20];
    int phone_number;
    struct phone_book *next;
};

//int hash(char name[], int N)
//{
//    int hash = 0;
//    int index;
//    for (int i = 0; i < strlen(name); i++)
//    {
//        hash = hash + (int)name[i];
//    }
//    index = hash % N;
//    return index;
//}
//
//void init(struct phone_book *HashTable[], int N)
//{
//    for (int i = 0; i < N; i++)
//    {
//        HashTable[i] = (struct phone_book*)malloc(sizeof(struct phone_book));
//        strcpy(HashTable[i]->name,"empty");
//        HashTable[i]->phone_number = 0;
//        HashTable[i]->next = NULL;
//    }
//}
//
//void addItem(struct phone_book *HashTable[], char name[], int phone_number, int N)
//{
//    int index = hash(name, N);
//    if (strcmp(HashTable[index]->name, "empty") == 0)
//    {
//        strcpy(HashTable[index]->name, name);
//        HashTable[index]->phone_number = phone_number;
//    }
//    else
//    {
//        struct phone_book *ptr = HashTable[index];
//        struct phone_book *n = (struct phone_book*)malloc(sizeof(struct phone_book));
//        strcpy(n->name,name);
//        n->phone_number = phone_number;
//        n->next = NULL;
//        while (ptr->next != NULL)
//        {
//            ptr = ptr->next;
//        }
//        ptr->next = n;
//    }
//}
//
//void findItem(struct phone_book *HashTable[], char name[], int N)
//{
//    int index = hash(name, N);
//    bool foundName = false;
//    struct phone_book *ptr = HashTable[index];
//    while (ptr != NULL)
//    {
//        if (strcmp(ptr->name, name) == 0)
//        {
//            foundName = true;
//            printf("%d\n",ptr->phone_number);
//        }
//        ptr = ptr->next;
//    }
//    if (foundName == false)
//    {
//        printf("UNKNOWN\n");
//    }
//}

int main()
{
    int N;
    scanf("%d", &N);getchar();
    
    struct phone_book *contact;
    contact = (struct phone_book*)malloc(N * sizeof(struct phone_book));
   
//    struct phone_book HashTable[N];
//    init(&HashTable, N);
    
    for(int i = 0; i < N; i++)
    {
        scanf("%s %d", contact[i].name, &contact[i].phone_number );getchar();
    }
    
    
    char search_name[20];
    while(scanf("%s", search_name) == 1)
    {
        for(int j = 0; j < N; j++)
        {
            if(strcmp(search_name, contact[j].name) == 0)
            {
                printf("%s=%d\n", contact[j].name, contact[j].phone_number);
                break;
            }
            else if(j == 2)
            {
                printf("Not found\n");getchar();
            }
        }
    }
}
