package main

import "fmt"

func main() {
  var v [] int
  for i := 1; i < 100; i++ {
    if ( i%3 == 0 || i%5 == 0) {
      v = append(v,i)
    }
  }
  for x := range v { fmt.Println(x)} 
}
