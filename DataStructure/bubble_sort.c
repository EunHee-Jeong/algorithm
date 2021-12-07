//
//  selection_sort.c
//  c_programming
//
//  Created by 정은희 on 2021/08/24.
//

#include <stdio.h>
// 버블정렬 (bubble sort)

int main() {
    
    int i, j, temp;
    int array[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
    printf("---정렬 전---\n");
    for (i=0; i<10; i++)
        printf("%d ", array[i]);
    printf("\n\n");
    
    for (i=0; i<10; i++) {
        for (j=0; j<9-i; j++) { // passthrough를 돌때마다 배열의 끝 값이 고정됨 (가장 큰 값이 가장 오른쪽 끝으로 옴)
            if (array[j] > array[j+1]) {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    
    printf("---정렬 후---\n");
    for (i=0; i<10; i++)
        printf("%d ", array[i]);
    printf("\n");
    
}
