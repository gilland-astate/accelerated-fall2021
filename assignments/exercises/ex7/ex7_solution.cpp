#include <iostream>
using std::cout;

const int maxHyp = (99 * 99);

int main () {
    int counter = 1;
    //Loop 1 - a
    for( int a = 1; a <= 99; a++ ){
        //Loop 2 - b
        for( int b = a; b <= 99; b++ ){
            int leftSide = (a*a) + (b*b);
            // Pythagorean Theoream
            if( leftSide < maxHyp ) {
                // Loop 3 - c
                for( int c = b; c <= 99; c++ ) {
                    int cSquared = (c * c);
                    if( leftSide == cSquared )
                        cout << "#" << counter++ << ": " 
                             <<"(" << a << "," << b << "," 
                             << c << ")" << std::endl;
                }
            }
        }
    }

    return 0;
}