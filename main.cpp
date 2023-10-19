#include <iostream>
#include <string>
#include <fstream>


int main() {
    
    std::ifstream in_file;
    in_file.open("matrix_input.txt", std::ios::in);

    std::string string_matrix_size;
    int matrix_size;
    std::getline(in_file, string_matrix_size);
    matrix_size = std::stoi(string_matrix_size);
    int largest_int = 2;
    
    std::cout<<"Matrix Size: "<<matrix_size<<"\n";
    
    int matrix_one[matrix_size][matrix_size];  // Will hold the first matrix
    int matrix_two[matrix_size][matrix_size];  // Will hold the second matrix

    // Convert .txt -> matrix
    for (int i = 0; i < matrix_size; i++) {  // Goes through each row
        for (int j = 0; j < matrix_size; j++) {  // Goes through each column
            in_file >> matrix_one[i][j];  // Uses IOStream to go from file to matrix
        }
    }

    // Same as above, but with matrix_two
    for (int i = 0; i < matrix_size; i++) {
        for (int j = 0; j < matrix_size; j++) {
            in_file >> matrix_two[i][j];
        }
    }

    in_file.close();

    // Funtion to print a given matrix
    std::cout<<"Matrix A:\n";
    for (int i = 0; i < matrix_size; i++) {
        for (int j = 0; j < matrix_size; j++) {
            std::string value = std::to_string(matrix_one[i][j]);
            while (value.size() < 3) {
                value = " " + value;
            }
            std::cout<<value<<" ";

        }
        std::cout<<"\n";
    }

    // Funtion to print a given matrix
    std::cout<<"\nMatrix B:\n";
    for (int i = 0; i < matrix_size; i++) {
        for (int j = 0; j < matrix_size; j++) {
            std::string value = std::to_string(matrix_two[i][j]);
            while (value.size() < 3) {
                value = " " + value;
            }
            std::cout<<value<<" ";

        }
        std::cout<<"\n";
    }


    // Matrix A + Matrix B
    int sum_matrix[matrix_size][matrix_size];
    for (int i=0; i < matrix_size; i++) {
        for (int j=0; j < matrix_size; j++) {
            sum_matrix[i][j] = matrix_one[i][j] + matrix_two[i][j];
        }
    }
        //Print Matrix A+B
    std::cout<<"\nMatrix Sum (A+B):\n";
    for (int i = 0; i < matrix_size; i++) {
        for (int j = 0; j < matrix_size; j++) {
            std::string value = std::to_string(sum_matrix[i][j]);
            while (value.size() < 3) {
                value = " " + value;
            }
            std::cout<<value<<" ";

        }
        std::cout<<"\n";
    }

    return 0;
}