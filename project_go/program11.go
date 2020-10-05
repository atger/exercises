package main

import "fmt"

func main() {
  var codon map[string] string
  codon = make(map[string] string)
  codon["met"] = "AUG"
  codon["stop"] = "UAA"
  codon["lys"] = "AGG"
  for amino := range codon {
    fmt.Println(codon[amino])
  }
}
