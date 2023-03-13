package main

import "fmt"

func main() {
	s := "Hello!"
	var pointer = &s
	fmt.Println(&pointer)
	fmt.Println(pointer)
	fmt.Println(*pointer)
}
