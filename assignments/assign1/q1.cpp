#include <iostream>
using namespace std;

// a) Sum of integers between first and last
int sumBetween(int first, int last) {
    int sum = 0;
    for (int i = first; i <= last; i++) {
        sum += i;
    }
    return sum;
}

// b) Smallest n such that 1+2+...+n >= goal
int smallestN(int goal) {
    int sum = 0, n = 0;
    while (sum < goal) {
        n++;
        sum += n;
    }
    return n;
}

// c) Greatest Common Divisor (GCD)
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// d) Check if number is prime
bool isPrime(int num) {
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main() {
    int first, last, goal, a, b, num;

    cout << "Enter first and last numbers: ";
    cin >> first >> last;
    cout << "Sum = " << sumBetween(first, last) << endl;

    cout << "Enter goal value: ";
    cin >> goal;
    cout << "Smallest n = " << smallestN(goal) << endl;

    cout << "Enter two numbers for GCD: ";
    cin >> a >> b;
    cout << "GCD = " << gcd(a, b) << endl;

    cout << "Enter number to check prime: ";
    cin >> num;
    if (isPrime(num))
        cout << "Prime Number" << endl;
    else
        cout << "Not a Prime Number" << endl;

    return 0;
}
