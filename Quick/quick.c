int partition(int List[] ,int Base, int Limit) {
    int temparory1, index1, index2, temparory2;

    temparory1 = List[Base];
    index1 = Base;
    index2 = Limit + 1;

    do {
        do {
            index1++;
        } while (List[index1] < temparory1 && index1 <= Limit);

        do {
            index2--;
        } while (temparory1 < List[index2]);

        if(index1 < index2) {
            temparory2 = List[index1];
            List[index1] = List[index2];
            List[index2] = temparory2;
        }
    } while (index1 < index2);

    List[Base] = List[index2];
    List[index2] = temparory1;
    return (index2);
}

void quick_sort(int List[] ,int Base, int Limit) {
    int index;

    if (Base < Limit){
        index = partition(List ,Base, Limit);
        quick_sort(List, Base, index - 1);
        quick_sort(List, index + 1, Limit);
    }
}