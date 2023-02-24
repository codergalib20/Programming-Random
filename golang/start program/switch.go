package main

import "fmt"

func main() {
	var letter string = "A"
	switch letter {
	case "a", "e", "i", "o", "u":
		fmt.Println("A vowel")
		fallthrough
	case "A", "E", "I", "O", "U":
		fmt.Println("Vowerls are great")
	default:
		fmt.Println("It's something else")
	}
}
