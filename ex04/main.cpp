#include<iostream>
#include<string>
#include<fstream>

void    fct_replace(std::string s1,std::string s2)
{
    return;
}

int main(int ac, char **av)
{
    std::fstream file;
    std::fstream nfile;

    if(ac == 4)
    {
        file.open("file.replace",std::ios::out | std::ios::trunc);
        if(file.is_open())
        {
            nfile.open(*av+1,std::ios::in);
            if(nfile.is_open())
                fct_replace(*av+2,*av+3);
            else{
                std::cerr<<"\033[31mError\033[0m"<<std::endl;
                file.close();
                return(1);
            }
        }
        else
        {
            std::cerr<<"\033[31mError\033[0m"<<std::endl;
            return(1);
        }
    }
    else
    {
        std::cerr<<"\033[31mError\033[0m"<<std::endl
                 <<"./replace <filename> string1 string2"<<std::endl;
        return(1);
    }

    return(0);
}