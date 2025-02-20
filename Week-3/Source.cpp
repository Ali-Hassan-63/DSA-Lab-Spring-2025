#include<iostream>
#include<conio.h>
using namespace std;
int fact(int n) {
	if (n == 0)return 1;
	else
		return n * fact(n - 1);
}
int main() {
	cout << fact(5) << endl;
	return 0;
}
// Example 3.2
#include <iostream>
using namespace std;

void rev() {
    char ch;
    cin.get(ch);
    if (ch != '\n') {
        rev();
        cout.put(ch);
    }
}
int main() {
    rev();
    return 0;
}
//Example 3
#include <iostream>
using namespace std;
int power(int X, int N) {
    if (N == 0)
        return 1;
    else
        return power(X, N - 1) * X;
}

int main() {
    int base, exponent;
        cout << "Enter base and exponent: ";
        cin >> base >> exponent;
        cout << base << "^" << exponent << " = " << power(base, exponent) << endl;
    return 0;
}
//Example 4
#include<iostream>
using namespace std;
int Ackermann(int m, int n) {
	if (m == 0)
		return n + 1;
	else if (m > 0 && n == 0)
		return Ackermann(m - 1, 1);
	else if (m > 0 && n > 0)
		return Ackermann(m - 1, Ackermann(m, n - 1));
}
int main() {
	cout << "Ackermann(2, 3)   = " << Ackermann(2, 3) << endl;
}
//Exercise 3.1: Write a c++ program to print 2^n( for N= 0,1,2,.......,20)in tabular form using power function
#include <iostream>
#include <iomanip> // For formatting output
using namespace std;
long long power(int X, int N) {
    if (N == 0)
        return 1;
    else
        return power(X, N - 1) * X;
}
int main() {
    int base = 2;
    cout << setw(5) << "N" << setw(15) << "2^N" << endl;
    cout << "------------------------" << endl;
    for (int N = 0; N <= 20; N++) {
        cout << setw(5) << N << setw(15) << power(base, N) << endl;
    }
    return 0;
}
//Exercise 3.2
#include<iostream>
using namespace std;
int Ackermann(int m, int n) {
	if (m == 0)
		return n + 1;
	else if (m > 0 && n == 0)
		return Ackermann(m - 1, 1);
	else if (m > 0 && n > 0)
		return Ackermann(m - 1, Ackermann(m, n - 1));
}
int main() {
	cout << "Ackermann(3, 4)   = " << Ackermann(3, 4) << endl;
}
//Exercise 3.3: A: Write a c++ function to print numbers from n to 0 using recursion
#include <iostream>
using namespace std;
// Recursive function to print numbers from n to 0
void printNumbers(int n) {
    if (n < 0) 
        return;
    cout << n << " "; 
    printNumbers(n - 1); 
}
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Numbers from " << n << " to 0: ";
    printNumbers(n);
    cout << endl;
    return 0;
}
//Exercise 3.3: B;
 C++ implementation to find 
 Binomial Coefficient using recursion
#include<iostream>
using namespace std;
// Returns value of Binomial Coefficient C(n, k)
int binomialCoeff(int n, int k) {
    // k can not be grater then k so we return 0 here
    if (k == n)
        return 1;
    // base condition when k and n are equal or k = 0
    if (k == 0)
        return 1;
    else if (k > 0 && k < n && n>1) {
        return binomialCoeff(n - 1, k - 1)
            + binomialCoeff(n - 1, k);
    }      
}
int main() {
    int n = 6, k = 4;
    cout << binomialCoeff(n, k);
    return 0;
}
//Exercise 3.3: C recursive function to check prime
#include <iostream>
using namespace std;
 Recursive function to check if n is prime
bool isPrime(int n, int i = 2) {
     Base cases
    if (n < 2) return false;  // Numbers < 2 are not prime
    else if (i == n) return true;  // Reached n, meaning no divisors found
    else if (n % i == 0) return false; // Found a divisor, n is not prime
    return isPrime(n, i + 1);
}
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isPrime(num))
        cout << num << " is a prime number." << endl;
    else
        cout << num << " is not a prime number." << endl;

    return 0;
}

