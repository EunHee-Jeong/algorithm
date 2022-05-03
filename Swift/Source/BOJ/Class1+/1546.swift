//
//  1546.swift
//  Source
//
//  Created by 정은희 on 2022/05/04.
//

let examNum = Double(readLine()!)!
let score = (readLine()?.split(separator: " ").map { Double($0)! })!
var maxScore = score.max()!
let fakeScore = score.map { $0 * 100 / maxScore }

var sum: Double = 0
for i in fakeScore {
    sum += i
}

print( sum / examNum )
