package main

import "fmt"

func main() {
  var a int = 2
  var b int = 3
  var result int
  
  result = sum(a,b)
  fmt.Println(result)
  result = max(a,b)
  fmt.Println(result)
  fname,lname := swap("Amit", "Kumar")
  fmt.Println(fname," ", lname)
}

func sum(a int, b int) int {
  return a+b
}

func max(a int, b int) int {
  if (a < b) {
    return b
  } else {
    return a
  }
}

func swap(a,b string) (string,string) {
  return b,a
}
