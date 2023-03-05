package main

import "fmt"

func main() {
	fmt.Println("Variables")
	// var
	var username string = "Asadullah"
	fmt.Println(username)
	fmt.Printf("Variable is of type : %T \n", username)

	var isLoggedIn bool = false
	fmt.Printf("Variable is of type : %T \n", isLoggedIn)

}
