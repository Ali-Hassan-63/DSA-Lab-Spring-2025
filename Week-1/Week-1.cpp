/*Example 1.1*/
#include<iostream>
using namespace std;
int max1(int X, int Y) { return(X > Y) ? X : Y; }
void max2(int X, int Y, int& Larger) { Larger = (X > Y) ? X : Y; }
void max3(int X, int Y, int* Larger) { *Larger = (X > Y) ? X : Y; }
int main() {
    int a = 10, b = 20;
    // Test max1
    int result1 = max1(a, b);
    cout << "Max using max1: " << result1 << endl;
    // Test max2
    int result2;
    max2(a, b, result2);
    cout << "Max using max2: " << result2 << endl;
    // Test max3
    int result3;
    max3(a, b, &result3);
    cout << "Max using max3: " << result3 << endl;
    return 0;
}
/*Example 1.2*/
#include<iostream>
#include<math.h>
using namespace std;
class Complex {
private:
    float re;
    float im;
public:
    Complex(float r, float i) { re = r; im = i; }
    Complex(float r) { re = r; im = 0.0; }
    ~Complex() {};
    double Magnitude() {
        return sqrt(re * re + Imag() * Imag());}
        float Real() { return re; }
        float Imag() { return im; }
        Complex operator+(Complex b) { return Complex(re + b.re, im + b.im); }
        Complex operator=(Complex b) { re = b.re; im = b.im; return *this; }
};
int main() {
    Complex a(1.0, 1.0);
    Complex* b = new Complex(5.0);
    Complex c(0, 0);
    cout << "a real = " << a.Real() << " a imaginary = " << a.Imag() << endl;
    cout << "b real = " << b->Real() << " b imaginary = " << b->Imag() << endl;
    c = a + (*b);
    cout << "c real = " << c.Real() << " c imaginary = " << c.Imag() << endl;
    delete b;
    return 0;
}
//Exercise 1.1
#include<iostream>
#include<math.h>
using namespace std;
class Complex {
private:
    float re;
    float im;
public:
    Complex(float r, float i) { re = r; im = i; }
    Complex(float r) { re = r; im = 0.0; }
    ~Complex() {};
    double Magnitude() {
        return sqrt(re * re + im * im);
    }
    float Real() { return re; }
    float Imag() { return im; }
    Complex operator+(Complex b) { return Complex(re + b.re, im + b.im); }
    Complex operator=(Complex b) { re = b.re; im = b.im; return *this; }
    Complex operator*(Complex b) {
        float realPart = re * b.re - im * b.im;
        float imagPart = re * b.im + im * b.re;
        return Complex(realPart, imagPart);
    }
};
int main() {
    Complex a(5, 1.0);
    Complex* b = new Complex(5.0);
    Complex c(0, 0);
    cout << "a real = " << a.Real() << " a imaginary = " << a.Imag() << endl;
    cout << "b real = " << b->Real() << " b imaginary = " << b->Imag() << endl;
    c = a * (*b);
    cout << "c real = " << c.Real() << " c imaginary = " << c.Imag() << endl;
    delete b;
    return 0;
}
//Example 1.3
#include<iostream>
using namespace std;
template<class T>
T GetMax(T a, T b) {
	T result;
	result = (a > b) ? a : b;
	return (result);
}
int main() {
	int i = 5, j = 6, k;
	long l = 10, m = 5, n;
	k = GetMax<int>(i, j);
	n = GetMax<long>(l, m);
	cout << k << endl;
	cout << n << endl;
	return 0;
}
//Example 1.4
#include<iostream>
using namespace std;
template<class T>
class mypair {
	T a, b;
public:
	mypair (T first, T second)
	{
		a = first; b = second;
	}
	T getmax();
};
template<class T>
T mypair<T>::getmax() {
	T retval;
	retval = a > b ? a : b;
	return retval;
}
int main() {
	mypair<int>myobject(100, 75);
	cout << myobject.getmax();
	return 0;
}
//Exercise 1.2
#include <iostream>
using namespace std;
template <class T>
class mypair {
    T a, b;
public:
    mypair(T first, T second) {
        a = first;
        b = second;
    }
    T getmax();
    T getmin(); // Function to get the minimum value
};
template <class T>
T mypair<T>::getmax() {
    return (a > b) ? a : b;
}
template <class T>
T mypair<T>::getmin() {
    return (a < b) ? a : b;
}
int main() {
    mypair<int> myobject(100, 75);
    cout << "Max: " << myobject.getmax() << endl;
    cout << "Min: " << myobject.getmin() << endl;
    return 0;
}
//Example 1.5
#include <iostream>
using namespace std;
template <class T, int N>
class mysequence {
    T memblock[N];
public:
    void setmember(int x, T value);
    T getmember(int x);
};
template <class T, int N>
void mysequence<T, N>::setmember(int x, T value) {
    memblock[x] = value;
}
template <class T, int N>
T mysequence<T, N>::getmember(int x) {
    return memblock[x];
}
int main() {
    mysequence<int, 5> myints;
    mysequence<double, 5> myfloats;
    myints.setmember(0, 100);
    myfloats.setmember(3, 3.1416);
    cout << myints.getmember(0) << '\n';
    cout << myfloats.getmember(3) << '\n';
    return 0;
}
//Exercise 1.3
#include <iostream>
#include <limits> // For numeric limits
using namespace std;
template <class T, int N>
class mysequence {
    T memblock[N];
public:
    void setmember(int x, T value);
    T getmember(int x);
    T getmin(); // Function to get the minimum value
    T getmax(); // Function to get the maximum value
};
template <class T, int N>
void mysequence<T, N>::setmember(int x, T value) {
    memblock[x] = value;
}
template <class T, int N>
T mysequence<T, N>::getmember(int x) {
    return memblock[x];
}
template <class T, int N>
T mysequence<T, N>::getmin() {
    T min = numeric_limits<T>::max(); // Initialize with the maximum possible value
    for (int i = 0; i < N; i++) {
        if (memblock[i] < min) {
            min = memblock[i];
        }
    }
    return min;
}
template <class T, int N>
T mysequence<T, N>::getmax() {
    T max = numeric_limits<T>::lowest(); // Initialize with the lowest possible value
    for (int i = 0; i < N; i++) {
        if (memblock[i] > max) {
            max = memblock[i];
        }
    }
    return max;
}
int main() {
    mysequence<int, 5> myints;
    mysequence<double, 5> myfloats;
    myints.setmember(0, 100);
    myints.setmember(1, 20);
    myints.setmember(2, 50);
    myints.setmember(3, 10);
    myints.setmember(4, 80);
    myfloats.setmember(0, 3.14);
    myfloats.setmember(1, 2.71);
    myfloats.setmember(2, 1.41);
    myfloats.setmember(3, 6.28);
    myfloats.setmember(4, 0.577);
    cout << "Integer Sequence:" << endl;
    cout << "Min: " << myints.getmin() << endl;
    cout << "Max: " << myints.getmax() << endl;
    cout << "Float Sequence:" << endl;
    cout << "Min: " << myfloats.getmin() << endl;
    cout << "Max: " << myfloats.getmax() << endl;

    return 0;
}
//Example 1.6
#include <iostream>
#include <fstream>
using namespace std;
int main(void) {
    ofstream outFile;
    outFile.open("fout.txt");
    ifstream inFile("fin.txt");
    char ch;
    int count = 0;
    while (inFile.get(ch)) {
        outFile << ch;
        count++;
    }
    outFile << "\n\nCharacter count = " << count << endl;
    inFile.close();
    outFile.close();
    return 0;
}
#include <iostream>
#include <fstream>
using namespace std;
int main(void) {
    ofstream outFile;
    outFile.open("fout.txt");
    ifstream inFile("fin.txt");
    char ch;
    int charCount = 0, wordCount = 0, sentenceCount = 0;
    bool inWord = false;
    while (inFile.get(ch)) {
        outFile << ch; // Write character to output file
        charCount++;
        // Count words
        if (isspace(ch) || ch == '\n') {
            if (inWord) {
                wordCount++;
                inWord = false;
            }
        }
        else if (!isspace(ch)) {
            inWord = true;
        }
        // Count sentences
        if (ch == '.' || ch == '!' || ch == '?') {
            sentenceCount++;
        }
    }
    // If the last word wasn't followed by a space, count it
    if (inWord) {
        wordCount++;
    }
    outFile << "\n\nCharacter count = " << charCount << endl;
    outFile << "Word count = " << wordCount << endl;
    outFile << "Sentence count = " << sentenceCount << endl;
    inFile.close();
    outFile.close();
    return 0;
}
 //Example 1.7
#include <iostream>
#include <fstream>
using namespace std;
int main() {
    char name[10];
    float mt1, mt2, final, avg;
    ifstream fin;   // Create file input stream object
    ofstream fout;  // Create file output stream object
    fin.open("input.dat");  // Open input file
    fout.open("output.dat"); // Open output file
    while (!fin.eof()) { // Read data from input file
        fin >> name >> mt1 >> mt2 >> final;
        avg = 0.25 * mt1 + 0.25 * mt2 + 0.5 * final;
        fout << name << '\t' << avg << endl; // Write result to output file
    }
    fin.close();  // Close input file
    fout.close(); // Close output file
    return 0;
}
//Exercise 1.5
#include <iostream>
#include <string>
using namespace std;
class House {
    string owner;       
    string address;     
    int bedrooms;      
    float price;        

public:
    void input() {
        cout << "Enter Owner: ";
        getline(cin, owner);
        cout << "Enter Address: ";
        getline(cin, address);
        cout << "Number of Bedrooms?: ";
        cin >> bedrooms;
        cout << "Price: ";
        cin >> price;
        cin.ignore(); 
    }
    void display() const {
        cout << owner << "\t" << address << "\t" << bedrooms << "\t" << price << endl;
    }
};
int main() {
    House available[100]; // Array of 100 House objects
    int count = 0;        // To keep track of the number of houses entered
    char choice;
    do {
        cout << "Enter details for house #" << count + 1 << ":\n";
        available[count].input(); // Input details for a house
        count++;
        // Ask user if they want to add another house
        cout << "Enter another house? (Y/N): ";
        cin >> choice;
        cin.ignore(); // Clear input buffer for next iteration
    } while (toupper(choice) == 'Y' && count < 100);
    // Display all entered houses
    cout << "\nThe output should look like this:\n";
    cout << "Owner\tAddress\t\tBedrooms\tPrice\n";
    for (int i = 0; i < count; i++) {
        available[i].display();
    }
    return 0;
}
//Exercise 1.6
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

class Student {
private:
    string name;      // Student's name
    int grades[10];   // Array to store grades
    float average;    // Average grade

public:
    // Function to read student data from file
    void readFromFile(ifstream& fin, int numGrades) {
        fin >> ws; // Consume any leading whitespace
        getline(fin, name); // Read full name
        int sum = 0;
        for (int i = 0; i < numGrades; i++) {
            fin >> grades[i];
            sum += grades[i];
        }
        average = static_cast<float>(sum) / numGrades; // Calculate average
    }

    // Function to display student data
    void display(int numGrades) const {
        cout << left << setw(20) << name;
        for (int i = 0; i < numGrades; i++) {
            cout << setw(5) << grades[i];
        }
        cout << setw(8) << fixed << setprecision(2) << average << endl;
    }

    // Getters for average and name
    float getAverage() const { return average; }
    string getName() const { return name; }
};

int main() {
    string filename;
    cout << "Enter the filename: ";
    cin >> filename;

    ifstream fin(filename);
    if (!fin) {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    int numStudents, numGrades;
    fin >> numStudents >> numGrades; // Read number of students and grades

    Student students[100]; // Array to store students

    // Read student data from file
    for (int i = 0; i < numStudents; i++) {
        students[i].readFromFile(fin, numGrades);
    }

    fin.close(); // Close the file

    // Display the student data
    cout << "\nStudent Data:\n";
    cout << left << setw(20) << "Name";
    for (int i = 0; i < numGrades; i++) cout << setw(5) << "G" + to_string(i + 1);
    cout << setw(8) << "Avg" << endl;
    cout << string(40, '-') << endl;
    for (int i = 0; i < numStudents; i++) {
        students[i].display(numGrades);
    }

    // Compute class average
    float classAvg = 0, highest = students[0].getAverage(), lowest = students[0].getAverage();
    string highStudent = students[0].getName(), lowStudent = students[0].getName();
    for (int i = 0; i < numStudents; i++) {
        classAvg += students[i].getAverage();
        if (students[i].getAverage() > highest) {
            highest = students[i].getAverage();
            highStudent = students[i].getName();
        }
        if (students[i].getAverage() < lowest) {
            lowest = students[i].getAverage();
            lowStudent = students[i].getName();
        }
    }
    classAvg /= numStudents;

    cout << "\nClass Average: " << fixed << setprecision(2) << classAvg << endl;
    cout << "Highest Average: " << highest << " (" << highStudent << ")" << endl;
    cout << "Lowest Average: " << lowest << " (" << lowStudent << ")" << endl;

    // List students below class average
    cout << "\nStudents below class average:\n";
    for (int i = 0; i < numStudents; i++) {
        if (students[i].getAverage() < classAvg) {
            cout << students[i].getName() << " (" << students[i].getAverage() << ")\n";
        }
    }

    return 0;
}