#include <iostream>
#include <cctype>

int main(int argn, char *argv[])
{
    int i;
    int j;
    if (argn == 1)
        std::cout<< "* LOUD AND UNBEARABLE FEEDBACK NOISE *" <<std::endl;
    else
    {
        for (i=1; argv[i]; i++)
            for(j=0; argv[i][j]; j++ )
                std::cout<< (char)std::toupper(argv[i][j]);
        std::cout<<std::endl;
    }
    return(0);
}