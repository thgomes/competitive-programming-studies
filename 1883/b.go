package main

import (
	"fmt"
)

func main() {
	var t, n, k int
	fmt.Scanf("%d\n", &t)
	for i := 0; i < t; i++ {
		var s string
		odd := 0
		fmt.Scanf("%d %d\n", &n, &k)
		fmt.Scanln(&s)
		letterCount := make(map[rune]int)
		for _, letter := range s {
			letterCount[letter]++
		}
		for _, count := range letterCount {
			if count%2 != 0 {
				odd++
			}
		}
		if (odd - k) > 1 {
			fmt.Printf("NO\n")
		} else {
			fmt.Printf("YES\n")
		}
	}
}
