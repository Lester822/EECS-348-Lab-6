#include <iostream>
#include <string>
#include <fstream>

int main() {
    
    std::ifstream in_file;
    in_file.open("matrix_input.txt", std::ios::in);

    std::string string_matrix_size;
    std::getline(in_file, string_matrix_size);
    
    for (int i = 0; i < 10; i++){
        std::string current_line;
        std::getline(in_file, current_line);
        std::cout<<current_line<<"\n";
    }

    in_file.close();
    std::cout<<"Hello World!";
    return 0;
}