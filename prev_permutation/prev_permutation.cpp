#include <algorithm>
#include <string>
#include <iostream>
#include <functional>
#include <vector>
int main()
{
    std::vector<int> A = {1,3,2,'a'};
    do {
        for (const int& num : A){
            std::cout << num;
        }
        std::cout << ' ';
    } while(std::prev_permutation(A.begin(), A.end()));
    std::cout << '\n';
    
}