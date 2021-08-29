#include "stats.h"
// #include <algorithm> // unnecessary here
#include <iostream>

/*
 *  Main function
 */
int main() {
	int x;
	int y;
	int z;

    // Since my median function is structured as a pseudo-sorting algorithm and is called first
    // in the main(), implement the use of its output values for the min and max functions
    // instead. Will leave original implementation of those functions there. Should be slightly
    // faster.
    int sortedMin = 0;
    int sortedMax = 0;

	// Set the precision for cout
	std::cout.precision(2);

    // Prompt the user
    std::cout << "Enter three integer numbers separated by a space or newline:" << std::endl;

	// Get Three integers
	std::cin >> x >> y >> z;
    // Assume that only integers are provided

	// Output Average (Show in fixed point)
	std::cout << "Average: " << std::fixed << average(x, y, z) << std::endl;

    // Output Median (Show in fixed point)
    std::cout << "Median: " << std::fixed << median(x, y, z, &sortedMin, &sortedMax) << std::endl;

    // Output Min (Show in fixed point)
    std::cout << "Min: " << std::fixed << sortedMin << std::endl;

    //Output Max (Show in fixed point)
    std::cout << "Max: " << std::fixed << sortedMax << std::endl;

	// Finish
	return 0;
}
