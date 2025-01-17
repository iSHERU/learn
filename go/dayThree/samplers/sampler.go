package samplers

import (
    // "rsc.io/quote"
    "math/rand"
    "fmt"
    "errors"
)

func GetQuote(name string) (string, error) {
    if name == "" {
        return name, errors.New("empty name")
    }

    message := fmt.Sprintf(randomFormat(), name)

    return message, nil
}

func randomFormat() string {
    formats := []string {
        "Hi, %v. Welcome!",
        "Hope you are Good, %v!",
        "Hello Mr. %v!",
    }

    return formats[rand.Intn(len(formats))]
}
