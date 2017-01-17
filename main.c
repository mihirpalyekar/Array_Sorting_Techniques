#include <stdio.h>

#include "Insertion/insertion.c"
#include "Bubble/bubble.c"
#include "Quick/quick.c"
#include "Radix/radix.c"
#include "Merge/merge.c"

void print(int List[] , int Limit);

void main() {
    int Limit , List[100] , index;
    int choice, Base = 0, index1;

    printf("Enter limit of the list : ");
    scanf("%d" , &Limit);
    printf("Enter elements of list : \n");

    for (index = 0; index < Limit; index++) {
        scanf("%d" , &List[index]);
    }

     do {
        printf("\n*****MENU*****\n");
        printf("_______________\n");
        printf("1. Insertion sort\n2. Bubble sort\n3. Quick sort\n4. Radix sort\n5. Merge sort\n6. Exit\n");
        printf("Enter your choice : ");
        scanf("%d" , &choice);
        
        switch(choice) {
            case 1 : insertion_sort(List , Limit);
                     print(List , Limit);       
            break;

            case 2 : bubble_sort(List , Limit);
                     print(List , Limit);   
            break;

            case 3 : quick_sort(List , Base , Limit);
                     print(List , Limit);
            break;

            case 4 : radix_sort(List, Base, Limit);
                     print(List , Limit);
            break;

            case 5 : merge_sort(List, Base, Limit);
                     print(List , Limit);
            break;

            case 6 : printf("Visit again\n");
            break;

            default : printf("invalid option\n");
            break;
        }
 
         printf("\n");
    } while(choice != 6);
}

void  print(int List[] , int Limit) {
    int index1;
    
    printf("Sorted list is :\n ");

    for(index1 = 0; index1 < Limit; index1++) {
        printf("%d\t" , List[index1]);
    }

}