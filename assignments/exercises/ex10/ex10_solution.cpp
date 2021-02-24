#include <iostream>

void sort( int& a, int& b );
void sort( int& a, int& b, int& c );
void sort( int& a, int& b, int& c, int& d );

int main() {
    int x, y, z, u;
    a = 13;
    b = 12;
    c = 10;
    d = 11;

    sort(x,y);

    if( x < y )
        std::cout << "SUCCESS on 2 element sort!" << std::endl;
    else
        std::cout << "FAILURE on 2 element sort!" << std::endl;

    sort(x,y,z);

    if( x < y && y < z )
        std::cout << "SUCCESS on 3 element sort!" << std::endl;
    else
        std::cout << "FAILURE on 3 element sort!" << std::endl;
    
    sort(x,y,z,u);

    if( x < y && y < z && z < u )
        std::cout << "SUCCESS on 4 element sort!" << std::endl;
    else
        std::cout << "FAILURE on 4 element sort!" << std::endl;

    //std::cout << a << " " << b << " " << c << " " << d << std::endl;

}

void sort( int& a, int& b ) {
    if( a > b ) {
        int c = b;
        b = a;
        a = c;
    }
}

void sort( int& a, int& b, int& c ) {
    sort(a,b);
    sort(b,c);
    sort(a,b);
}

void sort( int& a, int& b, int& c, int& d ) {
    sort(a,b,c);
    sort(b,c,d);
    sort(a,b);
}