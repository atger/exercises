package main

import "fmt"

type Point struct {
  x,y int
}

func(point Point) display() {
  fmt.Println(point.x,",",point.y)
}

func main() {
  coord := Point{x:2,y:5}
  coord.display()
}
