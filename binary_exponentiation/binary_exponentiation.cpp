#include <iostream>
#include <stack>
#include <algorithm>
#include <vector>

using namespace std;

int bin_pow(int a, int n) {

    if (n == 0) {
        return 1;

    }

    if (n % 2 == 1) {
        return bin_pow(a, n - 1) * a;

    }
    int b = bin_pow(a, n / 2);

    return b * b;
}


int main() {
    std::cout << (bin_pow(2, 10) == 1024);
    std::cout << (bin_pow(3, 5) == 243);
    std::cout << (bin_pow(2, 7) == 128);
    std::cout << (bin_pow(2, 5) == 64);
    std::cout << (bin_pow(2, 5) == 32);

}