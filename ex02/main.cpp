#include "Array.hpp"

int main() {
	const int MAX_VAL = 10;

	Array<int> numbers(MAX_VAL);

	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; ++i)
	{
		numbers[i] = rand() % 100;
	}

	// Affichage des éléments de l'objet Array
	std::cout << "Array elements:" << std::endl;
	for (int i = 0; i < numbers.size(); ++i)
	{
		std::cout << numbers[i] << " ";
	}
	std::cout << std::endl;

	// Test d'accès à un indice valide avec une gestion d'exception
	try {
		numbers[2] = 0;
		std::cout << "Element at index 2 successfully updated." << std::endl;
		for (int i = 0; i < numbers.size(); ++i)
		{
			std::cout << numbers[i] << " ";
		}
	std::cout << std::endl;
	} catch(const std::exception& e) {
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}


	// Test d'accès à un indice invalide avec une gestion d'exception
	// try {
	// 	numbers[-2] = 0;
	// }
	// catch(const std::exception& e){
	// 	std::cerr << "Exception caught: " << e.what() << std::endl;
	// }


	// On essaie d'assigner un tableau plus petit que l'objet Array
	// try {
	// 	numbers[MAX_VAL] = 0;
	// }
	// catch(const std::exception& e){
	// 	std::cerr << "Exception caught: " << e.what() << std::endl;
	// }

	return 0;
}
