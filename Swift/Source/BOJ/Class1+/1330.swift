//
//  1330.swift
//  Source
//
//  Created by 정은희 on 2022/05/03.
//

let input = (readLine()?.split(separator: " ").map{ Int($0)! })!

if input[0] > input[1] { print(">") }
else if input[0] < input[1] { print("<") }
else { print("==") }
