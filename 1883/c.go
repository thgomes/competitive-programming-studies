package main

import (
	"fmt"
)

func main() {
	var t, n, k, a int
	fmt.Scan(&t)
	for i := 0; i < t; i++ {
		fmt.Scan(&n, &k)
		x := 10
		even := 0
		for j := 0; j < n; j++ {
			fmt.Scan(&a)
			if a%k == 0 {
				x = 0
			}
			if (k - (a % k)) < x {
				x = k - (a % k)
			}
			if a%2 == 0 {
				even++
			}
		}
		if k == 4 && even == 0 && 2 < x {
			x = 2
		} else if k == 4 && even == 1 && 1 < x {
			x = 1
		} else if k == 4 && even >= 2 {
			x = 0
		}
		fmt.Printf("%d\n", x)
	}
}
