/*
https://www.hackerrank.com/challenges/flipping-bits/problem?utm_campaign=challenge-recommendation&utm_medium=email&utm_source=60-day-campaign
*/

package main

import (
	"fmt"
	"strconv"
)

// Complete the flippingBits function below.
func flippingBits(n int64) int64 {
	n_binary := strconv.FormatInt(n, 2)
	n_binary_len := len(n_binary)
	if n_binary_len < 32 {
		for i := 0; i < 32 - n_binary_len; i++ {
			n_binary = "0" + n_binary 
		}
	}
	
	n_binary_slice := []byte(n_binary)
	for i, v := range n_binary_slice {
		if v == '1' {
			n_binary_slice[i] = '0'
		} else {
			n_binary_slice[i] = '1'
		}
	}
	
	res_int, _ := strconv.ParseInt(string(n_binary_slice), 2, 64)
	return res_int
}

func main() {
	fmt.Println(flippingBits(4))
}
