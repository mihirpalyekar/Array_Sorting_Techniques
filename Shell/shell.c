void shell_sort(int List[] , int Limit) {
    int index1, index2, step, temporary;

    for(step = Limit/2; step > 0; step = step / 2) {
        for(index1 = step; index1 < Limit; index1++) {
            for(index2 = index1 - step; index2 >= 0; index2 = index2 - step) {
                if(List[index2 + step] >= List[index2]) {
                    break;
                }
                else {
                    temporary = List[index2];
                    List[index2] = List[index2 + step];
                    List[index2 + step] = temporary;
                }
            }
        }
    }
}