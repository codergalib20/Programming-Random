package main

import "fmt"

func main() {
	teachers := []string{"Galib", "Sakib", "Rifat", "Riyad", "Forhad", "Al Amin"}
	for i := 0; i < len(teachers); i++ {
		fmt.Println(teachers[i])
	}
}
