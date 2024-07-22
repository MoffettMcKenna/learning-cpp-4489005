// Learning C++ 
// Challenge 02_13
// Calculate an Average, by Eduardo Corpeño 

#include <iostream>

int main(){
    int nums[5] = {1,23,32,24,337};
    float result; 
    int sum = 0;

    // Write your code here
    for(int i = 0; i < 5; i++) {
        sum += nums[i];
    }

    result = sum/5.0f;
    
    std::cout << "The average is " << result << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
