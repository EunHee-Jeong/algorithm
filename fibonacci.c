//
//  fibonacci.c
//  c_programming
//
//  Created by 정은희 on 2021/09/12.
//

#include <stdio.h>

int f[100] = {0};   // 피보나치 수를 저장할 배열 준비

int fibo(int n) {
    
    if (f[n] != 0) {    // 값이 이미 저장되어 있다면 return
        return f[n];
    }
    
    else {
        if(n==1 || n==2) {  // f(1) == f(2) == 1
            f[n] = 1;
        }
        else {
            f[n] = fibo(n-1) + fibo (n-2);
        }
        
        return f[n];
    }
}

int main() {
    
    int n;
    printf("구하고 싶은 피보나치 수를 입력하세요.\n");
    scanf("%d", &n);
    
    printf("f(%d) = %d\n", n, fibo(n));
    
    return 0;
}
