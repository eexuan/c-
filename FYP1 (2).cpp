// x and y are the same

#include <cstdio>
#include <cmath>

int main() {
    int solutionsFound = 0;
    int limit;

    printf("Enter the limit for x and y: ");
    scanf("%d", &limit);
    
    printf("x\t y\t z\n");

    for (int x = 1; x <= limit; x++) {
        for (int y = 1; y <= limit; y++) {
            if (x == y) {
                int z = round(pow(pow(x, 3) - pow(y, 5), 1.0 / 3.0));
                if (pow(x, 3) - pow(y, 5) == pow(z, 3)) {
                    printf("%d\t %d\t %d\n", x, y, z);
                    solutionsFound++;
                }
            }
        }
    }

    printf("Program finished. Total solutions found: %d\n", solutionsFound);

    return 0;
}

