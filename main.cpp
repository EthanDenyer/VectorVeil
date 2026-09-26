// file find and open

#include <fstream>
#include <iostream>

using namespace std;

int main(){
    // Input segment
    string binpath;
    cout << "Enter filepath: "; 
    cin >> binpath; // User input
    std::ifstream file(binpath);
    // cout << "test" << binpath;
    return 0;
}