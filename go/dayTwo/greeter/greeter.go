package greeter

import (
    "fmt"
    "errors"
)

func Hello(name string) (string, error) {
    if name == "" {
        return "", errors.New("empty name")
    }

    message := fmt.Sprintf("Hi, %v. Glad seeing you here!", name)

    return message, nil
}
