//DISCLAIMER: the results are fully THEORATHICAL,
//Real world numbers may be diffrent 

#include <iostream>
#include <chrono>

using namespace std::chrono;

// This is the number of "iterations" that get averaged together
// the more iterations you do, the more accurate it gets
// default is 10(useful if you have changed it)
#define ITERATIONS 2

int sample(){
  //the code you want to measure goes here
  //go ahead and play around with your programs :)
  return 0;
}

int main() {
  double duration;
  for (int i; i < ITERATIONS;i++){
    auto start = high_resolution_clock::now();
    sample();
    auto stop = high_resolution_clock::now();
    duration += duration_cast<microseconds>(stop - start).count();
  }
  std::cout << "The Code took " << duration / ITERATIONS << " ms";
}
