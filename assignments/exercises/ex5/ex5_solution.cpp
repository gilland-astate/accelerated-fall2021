#include <fstream>
using std::fstream;

int main () {
    fstream textFile;

    textFile.open("grades.txt", fstream::in | fstream::out | fstream::app );
    if( !textFile )
        std::exit(1);

    double examGrade, labGrade;
    
    textFile >> examGrade >> labGrade;
    
    textFile << (examGrade * 0.7) + (labGrade * 0.3)7;

    textFile.close();

    return 0;
}