void insertion_sort(int List[] , int Limit) {
    int index1 , index2 ,temporary;
    for (index1 = 1 ; index1 < Limit ; index1++) {
        temporary = List[index1];
        index2 = index1 - 1 ;

            while (index2 >= 0 && List[index2] > temporary) {
                List[index2 + 1] = List[index2];
                index2 = index2 - 1;
            }
        List[index2 + 1] = temporary;
    }
    printf("sorted list is:-");
    for(index1 = 0 ; index1 < Limit ; index1++) {
    printf("%d" , List[index1]);
    }
    printf("\n");
}
