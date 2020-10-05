package main

import "fmt"

func main() {
  sequence := "ATGCGAAGGTA"
  for i,c := range sequence {
    fmt.Println(i,string(c))
  }
}
