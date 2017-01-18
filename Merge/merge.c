#define MAX_ARRAY_SIZE 100

void merge(int List[], int Base, int index, int Limit);

void merge_sort(int List[], int Base, int Limit) {

    int index;

    if (Base < Limit) {
        index = (Base + Limit) / 2;
        merge_sort(List, Base, index);
        merge_sort(List, index + 1, Limit);
        merge(List, Base, index, Limit);
    }   
}

void merge(int List[], int Base, int index, int Limit) {
    int array[MAX_ARRAY_SIZE];
    int index1, index2, index3;

    index1 = Base;
    index2 = index + 1;
    index3 = 0;

    while (index1 <= index && index2 <= Limit) {
        if (List[index1] < List[index2]) {
            array[index3] = List[index1];
            index1++;
            index3++;
        }
        else {
            array[index3] = List[index2];
            index2++;
            index3++;
        }
    }

    while (index1 <= index) {
        array[index3] = List[index1];
        index1++;
        index3++;
    }

    while (index2 <= Limit) {
        array[index3] = List[index2];
        index3++;
        index2++;
    }

    for (index1 = Base, index2 = 0; index1 <= Limit; index1++,index2++) {
        List[index1] = array[index2];
    }
}