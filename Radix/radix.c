void radix_sort(int List[] , int Base, int Limit) {
    int buckets[10][10] , count[10];
    int passes = 0, large, division;
    int bucketno, index1, index2, index3;

    large = List[Base];

    for(index1 = 1; index1 < Limit; index1++) {
        if(large < List[index1]) {
            large = List[index1];	
        }
    }

    while(large > 0) {
        passes++;
        large = large / 10;
    }

    division = 1;

    for(index1 = 1; index1 <= passes; index1++) {

        for(index2 = 0; index2 < 10; index2++) {
            count[index2] = 0;
        }

        for(index2 = 0; index2 < Limit; index2++) {
            bucketno = (List[index2] / division) % 10;
            buckets[bucketno][count[bucketno]] = List[index2];
            count[bucketno] +=1;
        }

        index2 = 0;

        for(bucketno = 0; bucketno <10; bucketno++) {
            for(index3 = 0; index3 < count[bucketno]; index3++) {
                List[index2++] = buckets[bucketno][index3];
            } 
        }
        division = division * 10;
    }
}