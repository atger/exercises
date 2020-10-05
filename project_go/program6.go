package main

import "fmt"

func main() {
  numbers := [6] int {}
  for i := 1; i <= 50; i++ {
    if (i % 2 == 0) {
      fmt.Printf("%d\t%s\n",i,"even")
    } else {
      fmt.Printf("%d\t%s\n",i, "odd")
    }
  }
  for x:= range numbers {
    fmt.Println(x)
  }
}
