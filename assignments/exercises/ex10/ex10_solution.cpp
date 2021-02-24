#include <iostream>

void sort( int& a, int& b );
void sort( int& a, int& b, int& c );
void sort( int& a, int& b, int& c, int& d );

int main() {
    int a, b;
    a = 10;
    b = 11;

    sort(a,b);

    if( a == 11 )
        std::cout << "SUCCESS on 2 element sort!" << std::endl;
    else
        std::cout << "FAILURE on 2 element sort!" << std::endl;

}

void sort( int& a, int& b ) {

}

void sort( int& a, int& b, int& c ) {

}

void sort( int& a, int& b, int& c, int& d ) {
    
}