#ifndef FIBONACCI_HPP
#define FIBONACCI_HPP

unsigned long long int fibonacci(int n) {
    unsigned long long int F[2]{0,1};
    for (int k = 0; k < n; k++)
        F[k%2] = F[1] + F[0];
    return F[n%2];
}

#endif