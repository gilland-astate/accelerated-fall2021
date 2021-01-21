#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;

int main () {
    double miles, mph, mpg, timeRemaining, gasRequired;
    
    // prompt for distance to destination (in miles)
    cout << "Enter the distance to your destination (in miles):  ";
    cin >> miles;
    
    //prompt for average rate of travel (in miles per hour)
    cout << "Enter the average rate of travel (in miles per hour):  ";
    cin >> mph;

    //prompt for average fuel consuption (in miles per gallon).
    cout << "Enter the average fuel consumption (in miles per gallon):  ";
    cin >> mpg;
    
    //calculate time remaining (in minutes)
    timeRemaining = (miles / mph) * 60;
    
    //calculate required gas to reach your destination (in gallons)
    gasRequired = miles / mpg;

    cout << "It appears you should reach your destination in " << std::fixed
         << std::setprecision(0) << timeRemaining << " minutes, and will use an additional "
         << std::setprecision(1) << gasRequired << " gallons of gas." << std::endl;

    return 0;
}





