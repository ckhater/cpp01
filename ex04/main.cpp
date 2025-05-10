#include<iostream>
#include<string>
#include<fstream>

int main(int ac, char **av)
{
    std::fstream nfile("nfile");
    std::fstream file("file");

    // if(file.open("file.replace",std::fstream))

    if(nfile.is_open())
        std::cout<<"it is open nfile"<<std::endl;
    else
        std::cout<<"nooooooooooooooooooooot n fileee"<<std::endl;

    return(0);
}