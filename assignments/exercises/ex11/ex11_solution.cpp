#include <iostream>
#include <vector>
#include <fstream>
#include <string>
using std::cout;
using std::cin;
using std::string;
using std::vector;

void getAverages( vector<double>& inVec );
void storeAverages( const vector<double>& inVec, string fileName );
void curveAverages( vector<double>& inVec, double curveAverages );

int main () {
    vector<double> examScores;
    getAverages(examScores);
    curveAverages(examScores, 2.0);
    storeAverages(examScores, "exams.txt");
    
    return 0;
}

void getAverages( vector<double>& inVec ) {
    int exam = 0;
    while (exam >= 0) {
        cout << "Enter exam average (negative to end): ";
        cin >> exam;
        if (exam >= 0)
            inVec.push_back(exam);
    }
}

void storeAverages( const vector<double>& inVec, string fileName ) {
    std::ofstream outFile(fileName);
    if( !outFile )
        exit(1);

    for ( int exam : inVec )
        outFile << exam << std::endl;
    
}

void curveAverages( vector<double>& inVec, double curveAverages ) {
    for( vector<double>::size_type i = 0; i < inVec.size(); i++ )
        inVec.at(i) += curveAverages;
}