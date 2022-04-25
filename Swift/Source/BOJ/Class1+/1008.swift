//
//  1008.swift
//  Source
//
//  Created by 정은희 on 2022/04/25.
//

let input = readLine()!.split(separator: " ").map { Double($0)! }   // Float로 하면 틀림
print(input[0] / input[1])

/*
 float의 상대오차 → 약 10^-7, double의 상대 오차 → 약 10^-15
 대부분의 프로그램에서 실수 연산을 할 때 정밀도가 더 높은 double 방식을 이용한다.
 */
