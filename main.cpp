#include "stats.h"
#include <algorithm>
#include <iostream>

/*
 *  Main function
 */
int main() {
	int x;
	int y;
	int z;

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
    std::cout << "Median: " << std::fixed << median(x, y, z) << std::endl;

    // Output Min (Show in fixed point)
    std::cout << "Min: " << std::fixed << min(x, y, z) << std::endl;

    //Output Max (Show in fixed point)
    std::cout << "Max: " << std::fixed << max(x, y, z) << std::endl;

	// Finish
	return 0;
}
