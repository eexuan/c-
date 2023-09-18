// x and y prime 

#include <cstdio>
#include <cmath>

bool isPrime(int n) {
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}

int main() {
    int solutionsFound = 0;
    int limit;

    printf("Enter the limit for x and y: ");
    scanf("%d", &limit);
    
    printf("x\t y\t z\n");

    for (int x = 2; x <= limit; x++) {
        if (isPrime(x)) {
            for (int y = 1; y <= limit; y++) {
                if (isPrime(y)) {
                    int z = round(pow(pow(x, 3) - pow(y, 5), 1.0 / 3.0));
                    if (pow(x, 3) - pow(y, 5) == pow(z, 3)) {
                        printf("%d\t %d\t %d\n", x, y, z);
                		solutionsFound++;
                    }
                }
            }
        }
    }

    printf("Program finished. Total solutions found: %d\n", solutionsFound);

    return 0;
}

