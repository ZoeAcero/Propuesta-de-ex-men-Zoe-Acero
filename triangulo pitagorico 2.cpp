#include <cstdio>
#include <cmath>

using namespace std;

int main() {
    int a, b, c;

    for (a = 1; a<=100; a++) {
        for (b = a; b<=100; b++) {

            c = sqrt(pow(a, 2) + pow(b, 2));

            if (a * a + b * b == c * c) {
                printf("%d, %d, %d\n", a, b, c);
            }
        }
    }
    return 0;
}