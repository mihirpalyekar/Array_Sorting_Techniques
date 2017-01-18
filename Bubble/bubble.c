void bubble_sort(int List[] , int Limit) {
    int index1, index2, temporary;

    for (index1 = 1; index1 < Limit; index1++) {
        for (index2 = 0;index2 < Limit-1; index2++) {
            if (List[index2] > List[index2 + 1]) {
                temporary = List[index2];
                List[index2] = List[index2 + 1];
                List[index2 + 1] = temporary;
            }
        }
    }
}