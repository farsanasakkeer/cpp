#include "Harl.hpp"

int main(int argc, char **argv)
{
    Harl obj;

	if(argc != 2)
	{
		std::cout <<RED << "Please enter a level | DEBUG | INFO | WARNING | ERROR |" <<RESET_COLOR<< std::endl;
		return(0);
	}
	else
	{
		obj.complain(argv[1]);
	}

}