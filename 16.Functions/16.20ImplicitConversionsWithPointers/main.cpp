#include <iostream>

void print_sum(int* param1, int* param2){
	std::cout << "sum : " << (*param1 + *param2) << std::endl;
}

int main(){

    // double a{3};
    // double b{12};

    print_sum(&a,&b);
   
    return 0;
}