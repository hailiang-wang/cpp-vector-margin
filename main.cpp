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
    vec.push_back(8);
    vec.push_back(9);
    vec.push_back(11);
    vec.push_back(14);


    for(std::vector<int>::iterator pi = vec.begin(); pi != vec.end();){
        std::cout << "start: " << *pi << endl;
        int start = *pi;
        std::vector<int>::iterator end = pi;

        for(std::vector<int>::iterator pj = (pi + 1); pj < vec.end(); ++pj){
            std::cout << "check: " << *pj << endl;
            if((*pj - 1) == *(pj-1)){
                end = pj;
            } else {
                pi = pj;
                break;
            }
        }

        std::cout << "-------- start: " << start << ", end: " << *end << endl;

        if(end == (vec.end() - 1)){
            break;
        }
    }

//    Output
//    Hello, World!
//            start: 3
//    check: 4
//    check: 5
//    check: 6
//    check: 8
//        -------- start: 3, end: 6
//    start: 8
//    check: 9
//    check: 11
//        -------- start: 8, end: 9
//    start: 11
//    check: 14
//        -------- start: 11, end: 11
//    start: 14
//        -------- start: 14, end: 14

    return 0;
}