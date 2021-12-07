//
//  insertion_sort.c
//  c_programming
//
//  Created by 정은희 on 2021/08/24.
//

#include <stdio.h>
// 삽입 정렬 (insertion sort)

int main() {
    int i, j, temp;
    int array[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
    printf("---정렬 전---\n");
    for (i=0; i<10; i++)
        printf("%d ", array[i]);
    printf("\n\n");
    
    for (i=0; i<9; i++) {   // 삽입 정렬 -> 이미 정렬이 되어 있다 가정
        j = i;
        while (j>=0 && array[j]>array[j+1]) { // 필요시에만 위치 바꿈
            temp = array[j];
            array[j] = array[j+1];
            array[j+1] = temp;
            j--;
        }
    }
    
    printf("---정렬 후---\n");
    for (i=0; i<10; i++)
        printf("%d ", array[i]);
    printf("\n");
}
