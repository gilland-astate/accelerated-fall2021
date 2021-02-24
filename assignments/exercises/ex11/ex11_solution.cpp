#include <iostream>
#include <vector>
#include <fstream>
#include <string>
using std::cout;
using std::cin;
using std::string;

void getAverages( vector<int>& inVec );
void storeAverages( const vector<int& inVec, string fileName );

int main () {



    return 0;
}

void getAverages( vector<int>& inVec ) {
    int exam = 0;
    while (exam >= 0) {
        cout << "Enter exam average (negative to end): ";
        cin >> exam;
        if (exam >= 0)
            inVec.push_back(exam);
    }
}

void storeAverages( const vector<int& inVec, string fileName ) {
    ofstream outFile(fileName);
    if( !outFile )
        exit(1);

    for (    :     )
}