#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define N 4 // number of nodes
#define ITERATIONS 100 // number of iterations

int main() {
    int i, j, k;
    double d = 0.85; // damping factor
    double diff, sum, tmp;

    double A[N][N] = { // adjacency matrix
        {0, 1, 1, 0},
        {0, 0, 1, 0},
        {1, 0, 0, 1},
        {0, 0, 1, 0}
    };

    double x[N] = { // initial page ranks
        0.25,
        0.25,
        0.25,
        0.25
    };

    for (k = 0; k < ITERATIONS; k++) {
        diff = 0;

        double x_new[N];

        for (i = 0; i < N; i++) {
            sum = 0;

            for (j = 0; j < N; j++) {
                if (A[j][i] == 1) {
                    sum += x[j] / (double)N;
                }
            }

            tmp = (1 - d) / (double)N + d * sum;

            diff += fabs(x[i] - tmp);

            x_new[i] = tmp;
        }

        for (i = 0; i < N; i++) {
            x[i] = x_new[i];
        }

        if (diff < 0.00001) { // convergence check
            break;
        }
    }

    for (i = 0; i < N; i++) {
        printf("PageRank for Node %d: %.4f\n", i, x[i]);
    }

    return 0;
}
