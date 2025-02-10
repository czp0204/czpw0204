 // not recommended this method
int fibonacci(int i) {
    if(i <= 0) return 0;
    if(i == 1) return 1;
    return fibonacci(i-1) + fibonacci(i-2);
}

// iterate with o(n) time complexity
int fibonacci2(int first, int second, int n) {
    return 0;
}

// not iterate method
int fibonacci3(int n) {
    int a{1}, b = 1, c(2);
    if (n == 0) return 0;
    if (n <= 2) return 1;

    // Debugging: Print initial values
    cout << "Starting fibonacci3 calculation for n = " << n << endl;

    for (int i = 3; i <= n-1; i++) {
        a = b;
        b = c;
        c = a + b;
        
        // Debugging: Print intermediate values of a, b, and c
        cout << "Iteration " << i - 2 << ": a = " << a << ", b = " << b << ", c = " << c << endl;
    }
    
    // Final result
    cout << "Final result of fibonacci3 for n = " << n << ": " << c << endl;
    
    return c;
}
/*     int i = fibonacci(10);      // Recursive fibonacci
    int i_2 = fibonacci3(10);   // Iterative fibonacci3

    cout << "Recursive fibonacci(11): " << i << endl;
    cout << "Iterative fibonacci3(11): " << i_2 << endl;

    // Compare both results to ensure correctness
    if (i == i_2) {
        cout << "Both fibonacci methods are correct and match!" << endl;
    } else {
        cout << "Mismatch between fibonacci methods!" << endl;
    } */