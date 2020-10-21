#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>

int read_int(){
    std::cout<<"Please introduce a number"<<std::endl;
    int n;
    std::cin>>n;

    return n;
}

int create_table(int I=5, int J=5)
{
    int s;
    for (int i=1; i<=I; i++)
    {
        std::cout<<i<<" |";
        for (int j=1; j<=J; j++){
            s=j*i;
            std::cout<<std::setw(3)<<s<< "  ";
        }
        std::cout<<std::endl;
    }
}

int main(){

    std::cout<<"How long should be your table?"<<std::endl;
    int tn=read_int();

    int s;
    for (int i=1; i<=1; i++)
    {
        std::cout<<"  |";
        for (int j=1; j<=tn; j++){
            s=j*i;
            std::cout<<std::setw(3)<<s<< "  ";
        }
        std::cout<<std::endl;
    }

    std::cout<<"--+------------------------------------------"<<std::endl;
    create_table(tn, tn);
    std::cout<<"---------------------------------------------"<<std::endl;

    return 0;
}
