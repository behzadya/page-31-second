#include <iostream>

int main() {
    int i,mahdi[100];
    for ( i=0 ; i<100 ; i++ )
        std::cin>>mahdi[i];
    for (i = 0 ; i<100 ; i+=3 )
        std::cout<<mahdi[i]<<" ";

}
