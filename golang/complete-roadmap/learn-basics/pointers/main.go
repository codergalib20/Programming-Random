package main

import "fmt"

func main() {
	s := "Hello!"
	var pointer = &s
	pointer2 := &s

	fmt.Println(&pointer)
	fmt.Println(pointer)
	fmt.Println(*pointer)

	// ----------
	fmt.Println(pointer2)
	fmt.Println(&pointer2)
	fmt.Println(*pointer2)
}
