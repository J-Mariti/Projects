#include <iostream>

int euclidean_algo(int first, int second){
    if ( first == 0 || second == 0){
        if( first == 0 ){
            return second;
        }
        else{
            return first;
        }
    }
    else{
        if (first > second){
            int rem = first % second;
            euclidean_algo(second, rem);
        }
        else{
            int rem = second % first;
            euclidean_algo(first, rem);
        }
    }
}


int main(){
    int input1, input2, result;

    std::cout << "Enter first Number" << std::endl;
    std::cin >> input1;
    std::cout << "Enter Second Number" << std::endl;
    std::cin >> input2;

    std::cout << "The first number is " << input1 << std::endl;
    std::cout << "The second number is " << input2 << std::endl;

    result = euclidean_algo(input1, input2);
    std::cout << "The Greates Common Divisor between " << input1 << " and " << input2 << " is " << result << std::endl;

    return 0;
}