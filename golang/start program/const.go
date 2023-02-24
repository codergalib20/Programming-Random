package main

import "fmt"

func main() {
	var NAME string = "Asadullah"
	const CLASS_NAME = "Galib"
	fmt.Scan(&NAME)
	fmt.Println(NAME)
	fmt.Printf("%v %v", NAME, CLASS_NAME)
}
