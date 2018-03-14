#include <iostream>
#include <string>
#include <vector>

using namespace std;


int main() {
    std::cout << "Hello, World!" << std::endl;
    std::vector<int> vec;
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    vec.push_back(6);

    for(std::vector<int>::iterator pi = vec.begin(); pi != vec.end();){

        std::cout << "start: " << *pi << endl;

        for(std::vector<int>::iterator pj = (pi + 1); pj < vec.end(); ++pj){
            std::cout << "check: " << *pj << endl;
        }
        std::cout << "-------- " << *pi << endl;
        pi++;
    }

    return 0;
}