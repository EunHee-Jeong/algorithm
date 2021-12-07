//
//  selection_sort.c
//  c_programming
//
//  Created by 정은희 on 2021/08/24.
//

#include <stdio.h>
// 선택 정렬 (selection sort)

int main() {
    int i, j, min, index, temp; // 최소값을 저장해줄 변수 min 필요
    int array[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
    printf("---정렬 전---\n");
    for (i=0; i<10; i++)
        printf("%d ", array[i]);
    printf("\n\n");
    
    for (i=0; i<10; i++) {
        min = 999; // 임의로 최소값 지정해줌
        for (j=i; j<10; j++) { // 한바퀴 돌며 최소값 탐색
            if (min > array[j]) {
                min = array[j];
                index = j; // 최소값의 주소 저장
            }
        }
        // 자리 이동
        temp = array[i];
        array[i] = array[index];
        array[index] = temp;
        
    }
    
    printf("---정렬 후---\n");
    for (i=0; i<10; i++)
        printf("%d ", array[i]);
    printf("\n");
    
}
