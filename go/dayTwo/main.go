package main

import (
    "go/dayTwo/sampler"
    "go/dayTwo/greeter"
    "log"
    "fmt"
)

func main() {
    sampler.Sampler()
    message, err := greeter.Hello("sher")

    if err != nil {
        log.Fatal(err)
    }

    fmt.Println(message)
}
