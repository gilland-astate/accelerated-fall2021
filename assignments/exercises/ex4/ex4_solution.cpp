#include <fstream>

int main() {
    std::ofstream outfile{"output.txt"};

    outfile << "Hello, world!";

    outfile.close();

    return 0;
}