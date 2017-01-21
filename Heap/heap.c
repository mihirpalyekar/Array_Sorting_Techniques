void down_adjest(int heap[] , int index );
void creat(int heap[]);
void heap_sort(int List[] , int Limit ) {
    int index1, last, temporary, heap[Limit], index2;

    for (index1 = 0, index2 = 1; index1 < Limit; index1++, index2++) {
        heap[index2] = List[index1];
    }
    
    heap[0] = Limit;
    creat(heap);

    while (heap[0] > 1) {
        last = heap[0];
        temporary = heap[1];
        heap[1] = heap[last];
        heap[last] = temporary;
        heap[0]--;
        down_adjest(heap , 1);
    }

    for (index1 = 0, index2 = 1; index2 <= Limit; index1++, index2++) {
        List[index1] = heap[index2];
    }

}

void creat(int heap[] ) {
    int index1, no_of_elements = heap[0];

    for (index1 = no_of_elements / 2; index1 >= 1; index1--) {
        down_adjest(heap , index1);
    }
}

void down_adjest(int heap[] , int index) {
    int index2, temporary1, index3, flag = 1;

    index3 = heap[0];
    while (2 * index <= index3 && flag == 1) {
        index2 = 2 * index;
        if (index2 + 1 <= index3 && heap[index2 + 1] > heap[index2]) {
            index2 = index2 + 1;
        }
        if (heap[index] > heap[index2]) {
            flag = 0;
        } else {
            temporary1 = heap[index];
            heap[index] = heap[index2];
            heap[index2] = temporary1;
            index = index2;
        }
        printf("%d\n",heap[index] );
    }
}