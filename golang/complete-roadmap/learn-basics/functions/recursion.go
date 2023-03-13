package main

import "fmt"

func main() {
	recursion(10)
}

func recursion(n int) {
	for i := n; n >= 0; i-- {
		fmt.Println(i)
	}
}
