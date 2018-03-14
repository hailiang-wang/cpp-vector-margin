#include <iostream>
#include <string>
#include <vector>
#include <utility>

using namespace std;

typedef std::vector< pair<int, int>> WR; // word range

void get_vector_margin()
{
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
}


void merge_vectot_margin()
{
    std::cout << "merge_vectot_margin" << endl;
    WR vec1;
    vec1.push_back(make_pair(0, 3));
    vec1.push_back(make_pair(4, 4));
    vec1.push_back(make_pair(5, 6));
    vec1.push_back(make_pair(7, 9));
    vec1.push_back(make_pair(10, 10));

    WR vec2;
    vec2.push_back(make_pair(3, 6));

    WR vec3;

    for(WR::iterator pi = vec2.begin(); pi != vec2.end(); ++pi){
        std::cout << " from " << pi->first << ", to " << pi->second << endl;
        int start = pi->first;
        int end = pi->second;
        for(WR::iterator pj = vec1.begin(); pj != vec1.end(); ++pj){
            if((pi->first >= pj->first) && (pi->first <= pj->second)){
                start = pj->first;
            }

            if((pi->second >= pj->first)&&(pi->second <= pj->second)){
                end = pj->second;
            }
        }

        vec3.push_back(make_pair(start, end));
        std::cout << " start: " << start << ", end: " << end << endl;
    }


}

int main() {
    std::cout << "Hello, World!" << std::endl;
//    get_vector_margin();
    merge_vectot_margin();

    return 0;
}