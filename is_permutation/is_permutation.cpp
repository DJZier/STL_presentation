#include <iostream>     
#include <algorithm>    
#include <vector>   
#include "Smartphone.h"     

using namespace std;




int main() 
{ 
    vector<Smartphone> A = {Smartphone("Galaxy s10", "Samsung"),Smartphone("Iphone X", "Apple"),Smartphone("View 4", "Wiko")};
    vector<Smartphone> B = {Smartphone("View 4", "Wiko"),Smartphone("Galaxy s10", "Samsung"),Smartphone("Iphone X", "Apple")};
      
    /*Checking if B is a permutation of A*/
    if ( is_permutation ( A.begin(), A.end(), B.begin() ) ) 
    { 
        cout << "A and B contain the same elements" << endl ; 
    } 
      
    else
    { 
        cout << "A and B are different" << endl ; 
    } 
    return 0; 
} 