// Every line starting # is preprocessor directive
#include <iostream>

/*
    This is a directive that tells the preprocessor to
    include the contents of file
*/

int main() {
    // How is a book organized?
    // A code block is grouping of one or more statements.
    {
        // a statement is a syntactic unit of an imperative programming language
        ;
        ;
    }
    std::cout << "Hi there!" << " Bye!" << std::endl;
    std::cout << "End!";
    return 0;
}