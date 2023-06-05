#include <iostream>
#include <stack>
#include <algorithm>
#include <vector>

using namespace std;

int gcd(int a, int b) {

    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);

}

int lcm(int a, int b) {
    return a * b / gcd(a, b);
}




int main() {
    std::cout << (gcd(15, 24) == 3);
    std::cout << (gcd(7, 14) == 7);
    std::cout << (gcd(14, 7) == 7);
    std::cout << (gcd(15, 28) == 1);

}