package main

import "fmt"

func main() {

	// var arr [5]int = [5]int{23, 4, 5, 566, 6}
	// fmt.Println(arr)

	// var arr2 []string = []string{"sdfsd", "sdfsd", "sdfsd", "Sdfsd", "sdfsd"}
	// fmt.Println(arr2)

	// 	arr := []int{3, 43, 4, 3, 43, 43}
	// 	arr2 := []string{"34", "343", "343", "343"}

	// 	fmt.Println(arr, "-", arr2)

	var grades [5]int = [5]int{3, 4, 5, 6, 4}
	// for i := 0; i < len(grades); i++ {
	// 	fmt.Println(grades[i])
	// }

	for index, element := range grades {
		fmt.Println(index, " => ", element)
	}
}
