#include <cstdint>
#include <iostream>
#include <string>

// compute n^k
uint32_t exp(uint32_t n, uint32_t k)
{
    /* solution */
}

int main(int argc, char* argv[])
{
    uint32_t n = std::stoul(argv[1]); // read in n, cast to uint32_t
    std::cout << exp(n, n); // print n^n
}

// Copy this file to src/solution.cpp and add your code.
// Then compile with `g++ src/solution.cpp -o solution` in the `01` directory
