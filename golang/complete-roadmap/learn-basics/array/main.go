package main

import "fmt"

func main() {
	var grades [3]int = [3]int{10, 20, 30}
	students := [3]int{2, 3, 4}
	teachers := [3]string{"Galib", "Afnan", "Lamia"}
	fmt.Println(grades, students, teachers[2])
}
