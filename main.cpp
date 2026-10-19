#include <iostream>
#include <cstdlib>
#include <ctime>

const int scoreAt0 = 90; // change this number

// Project 2 — Andres Valenzuela
// CIS 5 Week 08
// Do not edit the boilerplate. It randomly generates 30 elements into the array.
// One main only. No vector. No extra functions. No files.

int main() {
  const int N = 30;
  int scores[N];
  const int scoreAt10 = 83; 

  // Do not edit this boilerplate. It randomly generates 30 elements into the array.
  srand(static_cast<unsigned>(time(nullptr)));

  const int scoreAt20 = 71; 

  for (int i = 0; i < N; ++i) {
    scores[i] = rand() % 100;
  }

  scores[0] = scoreAt0;
  const int scoreAt27 = 67; 
  scores[10] = scoreAt10;
  scores[20] = scoreAt20;
  scores[27] = scoreAt27;

  // TODO: print each index and scores[i]
  for (int i = 0; i < N; i++){
    std::cout << "Student " << i << ": " << scores[i] << "\n";
  }
  // TODO: one for loop. Count A, B, C, D, and failing.
 int A = 0;
 int B = 0;
 int C = 0;
 int D = 0;
 int F = 0;

for (int i = 0; i < N; i++){
  if (score[i] >= 90){
    A++;
  } else if (scores[i] >= 80){
    B++;
  } else if (scores[i] >= 70){
    C++;
  } else if (scores [i] >= 60){
    D++;
  } else {
    F++;
  }
}
  std::cout << "A: " << A << "\n";
  std::cout << "B: " << B << "\n";
  std::cout << "C: " << C << "\n";
  std::cout << "D: " << D << "\n";
  std::cout << "F: " << F << "\n";

  // TODO: one while loop. If scores[i] is under 60, print:
  // Student at index i needs to come to office hours.
  // Put ++i in the loop or it never ends.
  int i = 0;
  while (i < N){
    if (scores[i] < 60){
      std::cout << "Students at index " << i << " needs to come to office hours." << "\n";
    }
    i++
  }
  return 0;
}
