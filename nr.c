#include <stdio.h>

#include <math.h>

#define tol 0.000001
double f(double x) {

  return (x * x * x) - x - 1;
}

double f_x(double x) {

  return (3 * x * x - 1);
}

void newtonraphson(double x) {
  double h = f(x) / f_x(x);
  while (h >= tol || -h >= tol) {
    h = f(x) / f_x(x);
    x = x - h;
  }
  printf("The value of the root is: %lf\n", x);
}

void main() {

  newtonraphson(2);

}
