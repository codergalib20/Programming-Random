package main

import "fmt"

func main() {
	var fullname string
	var age int
	var gpa float32
	age = 17
	gpa = 5.00
	school := "Nilphamari Technical School"
	firstName := "Asadullah"
	fullname = "Asadullah Hil Galib"
	fmt.Println("my name is ", fullname, " I'm ", age, " My last CGPA ", gpa)
	fmt.Printf("My name is %v my school name is %v", firstName, school)
}
