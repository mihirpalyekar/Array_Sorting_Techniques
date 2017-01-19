void selection_sort(int List[] , int Limit) {

    int index1, index2, index3,temporary;

    for (index1 = 0; index1 < Limit - 1; index1++) {
        index3 = index1;
        for (index2 = index1 + 1; index2 < Limit; index2++) {
            if (List[index2] < List[index3]) {
                index3 = index2;
            }

            if (index3 != index1) {
                temporary = List[index1];
                List[index1] = List[index3];
                List[index3] = temporary;
            }
        }
    }
}