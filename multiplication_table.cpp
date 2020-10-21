#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>

int read_int() //function taking input from user
{
    std::cout<<"Please introduce a number"<<std::endl;
    int n;
    std::cin>>n;

    return n;
}

int main(){

    std::cout<<"How long should be your table?"<<std::endl;
    int tn=read_int();

    if (tn==0)
    {
        std::cout<<"You've given 0 or a letter so the program will shut down";
        return 0;
    }

    std::vector<std::vector<int>>table;
    int s;

    for (int i=1; i<=tn; i++)
    {
        std::vector<int>row;
        for (int j=1; j<=tn; j++){
            s=j*i;
            row.push_back(s);
        }
        table.push_back(row);
    }

    std::ofstream file;
    file.open("values.txt");

    for( int i=0; i<tn; i++){
        for( int j=0; j<tn; j++){
        file<<table[i][j]<<" ";
        }
        file<<"\n";
    }

    file.close();

    return 0;
}
