#include <iostream>
using namespace std;

// Structure to store individual terms of a polynomial
struct Terms {
    int exp;    // Exponent
    int coeff;  // Coefficient
};

// Structure to represent a polynomial
struct Poly {
    int n;      // Number of non-zero terms
    Terms* t;   // Array of terms
};

// Function to create a polynomial by reading terms from the user
void create(Poly* p) {
    cout << "Enter number of non-zero terms: ";
    cin >> p->n;
    p->t = new Terms[p->n];  // Allocate memory for the terms

    cout << "Enter terms (coefficient and exponent):\n";
    for (int i = 0; i < p->n; i++) {
        cin >> p->t[i].coeff >> p->t[i].exp;
    }
}

// Function to display a polynomial
void display(const Poly& p) {
    for (int i = 0; i < p.n; i++) {
        cout << p.t[i].coeff << "x^" << p.t[i].exp;
        if (i != p.n - 1) {
            cout << " + ";
        }
    }
    cout << endl;
}

// Function to add two polynomials and return the result
Poly add(const Poly& p1, const Poly& p2) {
    int i = 0, j = 0, k = 0;
    Poly sum;
    sum.n = p1.n + p2.n;  // Allocate the maximum possible size
    sum.t = new Terms[sum.n];

    // Add terms from both polynomials
    while (i < p1.n && j < p2.n) {
        if (p1.t[i].exp < p2.t[j].exp) {
            sum.t[k++] = p2.t[j++];
        } else if (p1.t[i].exp > p2.t[j].exp) {
            sum.t[k++] = p1.t[i++];
        } else {
            sum.t[k].exp = p1.t[i].exp;
            sum.t[k++].coeff = p1.t[i++].coeff + p2.t[j++].coeff;
        }
    }

    // Copy remaining terms from p1, if any
    while (i < p1.n) {
        sum.t[k++] = p1.t[i++];
    }

    // Copy remaining terms from p2, if any
    while (j < p2.n) {
        sum.t[k++] = p2.t[j++];
    }

    sum.n = k;  // Update the number of terms in the sum
    return sum;
}

int main() {
    Poly p1, p2, sum;
    
    cout << "Create the first polynomial:\n";
    create(&p1);
    
    cout << "Create the second polynomial:\n";
    create(&p2);
    
    cout << "First polynomial: ";
    display(p1);
    
    cout << "Second polynomial: ";
    display(p2);
    
    // Adding two polynomials
    sum = add(p1, p2);
    
    cout << "Sum of the polynomials: ";
    display(sum);

    // Cleanup dynamically allocated memory
    delete[] p1.t;
    delete[] p2.t;
    delete[] sum.t;

    return 0;
}
