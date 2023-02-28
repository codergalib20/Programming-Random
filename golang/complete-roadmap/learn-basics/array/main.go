package main

import "fmt"

func main() {
	var grades [3]int = [3]int{10, 20, 30}
	students := [3]int{2, 3, 4}
	teachers := [3]string{"Atiur", "Proshanto", "Ajijar"}
	froots := [...]int{22, 3, 45, 4, 66, 4, 3}
	fmt.Println(grades, students, teachers[2], froots)
	// for i := 0; i < len(grades); i++ {
	// 	fmt.Println(grades[i])
	// }
	// for i := 0; i < len(teachers); i++ {
	// 	fmt.Println(teachers[i])
	// }
	// for i := 0; i < len(froots); i++ {
	// 	fmt.Println(froots[i])
	// }

	for index, element := range teachers {
		fmt.Println(index+1, " => ", element)
	}

}
