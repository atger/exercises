package main

import "fmt"
import  "strings"

func main() {
  var dna = []string{"G", "C"}
  for i := 1; i < 10; i++ {
    fmt.Println(strings.Join(dna,"A"))
  }
}
