int factorial_loop(int n) {
    int output = 1;

    for (int i = n; i >= 1; i--) {
        output *= i;
    }

    return output;
}
