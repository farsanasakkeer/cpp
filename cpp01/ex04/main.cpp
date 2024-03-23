#include <fstream>//ifstream
#include <iostream>
#include <string>
#include <cstdlib> // for exit()

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cerr<<"\033[31m"<<"Wrong input: check number if arguments"<<"\033[0m"<<std::endl;
        exit (EXIT_FAILURE);
    }
    std::string filename = av[1];
	std::string str1 = av[2];
	std::string str2 = av[3];
	std::string newfilename;
	std::string line;
	char ch;

    if( str1 == str2)
    {
        std::cerr<< "\033[31m" << "Wrong input: both strings are same" << "\033[0m" <<std::endl;
        exit (EXIT_FAILURE);
    }
    // filename = "txt.txt";
    // std::ifstream file(filename); 
    std::ifstream file(filename.c_str());//It is used to read data from files.
    if (!file.is_open())
	{
		std::cerr << "\033[31m" << "Invalid filename!!" << "\033[0m" << std::endl;
		file.close();
		exit (EXIT_FAILURE);
	}
	else
		newfilename = filename + ".replace";
    
    // Read characters from the file into the line string
    while (file.get(ch))
		line.push_back(ch); // Append each character to the line string
    file.close();

	std::ofstream newfile(newfilename.c_str());

    // std::ofstream: This is a class provided by the C++ Standard Library for output operations on files. 
    // It is used to write data to files.
    
    if (newfile.is_open())
	{
        std::string latest;

		size_t start = 0;
		size_t index = line.find(str1);//get the index of first occurance
        // std::string::npos if the substring is not found.(npos:no position)
        while(index != std::string::npos)
        {
            latest += line.substr(start,index-start);
            latest += str2;
            start = index + str1.length();
            index = line.find(str1,start);
        }
        latest += line.substr(start);
		newfile << latest;
		newfile.close();
    }
    else
    {
        std::cerr<< "\033[31m" << "Failed to create output file" << "\033[0m" <<std::endl;
        exit (EXIT_FAILURE);
    }
    return(0);
}