#include <iostream>



int max(const int a,const int b){
    return (a > b)? a : b;
}

//error : redefinition of max

int max( int a,  int b){
    ++a;
    return (a > b)? a : b;
}
int main(){

    const int a = 0;
    const int b = 3;
    std::cout << max(a,b) << std::endl;
    return 0;
}

