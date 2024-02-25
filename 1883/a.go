package main

import (
	"fmt"
	"math"
)

func main() {
	var n, lastNum, currNum int
	var pin string
	fmt.Scanf("%d", &n)
	fmt.Scanln()
	for i := 0; i < n; i++ {
		count := 4
		fmt.Scanln(&pin)
		lastNum = 1
		for _, char := range pin {
			currNum = int(char - '0')
			if currNum == 0 {
				currNum = 10
			}
			count += int(math.Abs(float64(currNum - lastNum)))
			lastNum = currNum
		}
		fmt.Printf("%d\n", count)
	}
}
