package main

import "fmt"

func main() {
	slice := make([]int, 5, 7)
	fmt.Println(slice)
	fmt.Println(len(slice))
	fmt.Println(cap(slice))
}
