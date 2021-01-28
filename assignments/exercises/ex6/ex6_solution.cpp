#include <iostream>

int main() {
    int numberToCheck;

    std::cout << "Enter a three-, four- or five-digit positive integer:  ";
    std::cin >> numberToCheck;

    int tenThousands, thousands, hundreds, tens, ones;
    bool palindrome = true;

    ones = numberToCheck % 10;
    tens = (numberToCheck / 10) % 10;
    hundreds = (numberToCheck / 100) % 10;
    thousands = (numberToCheck / 1000) % 10;
    tenThousands = (numberToCheck / 10000) % 10;

    if ( numberToCheck < 100 && numberToCheck > 99999 ) // Check outside range
        std::cout << numberToCheck  
                  << "is not within the range specified. Exiting..." << std::endl;
    else
    {
        if ( numberToCheck > 9999 ) // Five-Digit
            if ( tenThousands != ones || thousands != tens )
                palindrome = false;
        else if ( numberToCheck > 999 ) // Four-Digit
            if (thousands != ones || hundreds != tens )
                palindrome = false;
        else // Three-Digit
            if ( hundreds != ones )
                palindrome = false;

        if ( palindrome )
            std::cout << numberToCheck << "is a palindrome." << std::endl;
        else
            std::cout << numberToCheck << "is not a palindrome." << std::endl;
            
    }

    return 0;
}