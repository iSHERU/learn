package main

import (
    "fmt"
    "log"
    // "bufio"
    // "os"
)

func main() {
    var num1, num2 int
    var choice string

    fmt.Print("Enter Num1 and Num2: ")
    _, err := fmt.Scan(&num1, &num2)

    if err != nil {
        log.Fatal(err, "No Numbers entered")
    }



    fmt.Print("Enter Choice: ")
    fmt.Scan(&choice)

    switch choice {
    case "1":
        fmt.Printf("The addition is: %d.", AddNum(num1, num2))

    case "2":
        fmt.Printf("The subtraction is: %d.", SubNum(num1, num2))

    case "3":
        fmt.Printf("The multiplication is: %d.", MultiplyNum(num1, num2))

    case "4":
        fmt.Printf("The division is: %d.", DivideNum(num1, num2))

    default:
        log.Fatal("No Choice selected!")
    }
}

func AddNum(num1, num2 int) int {
    return num1 + num2
}

func SubNum(num1, num2 int) int {
    return num1 - num2
}

func MultiplyNum(num1, num2 int) int {
    return num1 * num2
}

func DivideNum(num1, num2 int) int {
    return num1 / num2
}
