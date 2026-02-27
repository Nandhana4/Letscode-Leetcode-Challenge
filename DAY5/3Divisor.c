bool isThree(int n) {
 int x = sqrt(n);

    // must be perfect square
    if (x * x != n)
        return false;

    // check if x is prime
    if (x < 2)
        return false;

    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0)
            return false;
    }

    return true;
}
