# EZSORT
A very easy to use, simplistic array integer sorting library for C which can sort integer array usging the quicksort algorithm.
# How To Use It
First of all, put "sort.h" wherever your compiler looks for libraries.
```C
#include <stdio.h>
#include "ezsort.h"

int main(){
   int values[] = {1,2,3,4,5,6,7,8,9,10};
   sort(values, length(values));//length() returns the length of an array, it is included in the library 
   //sortreverse() can also be used to reverse sort the array.
   printarray(values, length(values));//printarray() prints the array ,it is included in the library 
}

```
