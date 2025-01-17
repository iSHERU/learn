package main

import (
    "fmt"
    "go/dayThree/samplers"
    "log"
)

func main() {
    message, err := samplers.GetQuote("sher")

    if err != nil {
        log.Fatal(err)
    }

    fmt.Println(message)
}
