#include <iostream>
#include <iomanip>
using std::cout;
using std::cin;

int main () {
    //    4 exam scores (as integers)
    int exam1, exam2, exam3, exam4;
    cout << "Enter the 4 exam scores (seperated by spaces or new lines): ";
    cin >> exam1 >> exam2 >> exam3 >> exam4;
    
    //    4 points possible for the exams (as integers)
    cout << "Enter the points possible for the 4 exams (seperated by spaces or new lines): ";
    int points1, points2, points3, points4;
    cin >> points1 >> points2 >> points3 >> points4;

    int examTotal, pointsTotal;
    //    Total points of combined exams (as integer)
    examTotal = exam1 + exam2 + exam3 + exam4;
    //    Total points possible of combined exams (as integer)
    pointsTotal = points1 + points2 + points3 + points4;

    cout << "The total points scored on all exams was " << examTotal << " out of a possible total of "
         << pointsTotal << ". Making the overall grade average " << std::fixed << std::setprecision(1)
         << static_cast<double>(examTotal) / pointsTotal * 100 << "%." << std::endl;
    //      ^^^^^^^^^^^^^^^^^^^^^^^^^^
    //    The average of the exams (as decimal with 1 place)
}