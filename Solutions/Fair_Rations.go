package main

import (
	"fmt"
	"strconv"
)

func fairRations(B []int32) string {
	var sum int32 = 0
	for _, elem := range B {
		sum = sum + elem
	}

	if sum%2 != 0 {
		return "NO"
	}

	count := 0
	for i := 0; i < len(B); i++ {
		if B[i]%2 != 0 {
			B[i] = B[i] + 1
			B[i+1] = B[i+1] + 1
			count += 2
		}
	}
	return strconv.Itoa(count)
}

func main() {
	test_arr := []int32{2, 3, 4, 5, 6}
	fmt.Println(fairRations(test_arr))
}
