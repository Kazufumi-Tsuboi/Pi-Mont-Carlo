#include <iostream> //for std::cout
#include <cstdlib>  //for rand and srand
#include <ctime>    //for time

int main() {
    int niter = 2000;
    srand((unsigned) time(NULL));
    int n_in = 0;

    /* Main Loop*/
    for (int iter = 1; iter < niter + 1; iter++) {
        double x = (double) rand() / RAND_MAX;
        double y = (double) rand() / RAND_MAX;
        if (x * x + y * y < 1.0) {
            n_in = n_in + 1;
        }
        std::cout << iter << " " << 4 * (double) n_in / iter << std::endl;
    }
    return 0;
}
