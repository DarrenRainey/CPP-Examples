// C++ Example Code By Darren Rainey 2017 https://github.com/DarrenRainey/CPP-Examples

#include <stdio.h> // Import standard libarys header file
#include <iostream> // Import IO stream header file
#include <fstream> // Import fstream Header file for file creation

using namespace std; // Tell the compiler that the following code is used in the std context
int main() // Start Main Function
{
  char file[] = "Hello.txt";
  ofstream output; // Set output as variable name
  output.open(file) // Create and open a file called Hello.txt
  output << "Hello I Am A File" << std::endl; // Print Hello I Am A File to output variable
  output.close; // Close file after writing

  return 0; // Exit if no errors
}
