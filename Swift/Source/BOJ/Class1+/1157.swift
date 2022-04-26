//
//  1157.swift
//  Source
//
//  Created by 정은희 on 2022/04/26.
//

let input = readLine()!.uppercased()
var splitted: [Character] = [ ]

input.forEach { character in
    splitted.append(character)
}

let alphabetSet: Set<Character>  = Set(splitted)
var counted: [Character: Int] = [:]

for alphabet in alphabetSet {
    let num = splitted.filter { character in
        return alphabet == character
    }.count
    counted[alphabet] = num
}

let filtered = counted.filter { dictionary in
    return dictionary.value == counted.values.max()!
}

if filtered.count == 1 {
    print(filtered.first!.key)
} else { print("?") }
