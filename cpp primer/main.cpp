#include <iostream>
#include <xlocmon>

int main()
{
	int sum = 0, value = 0, value1 = 0, value2 = 0;

	std::cout << "1ere valeur : " << std::endl;
	std::cin >> value1;

	std::cout << "2eme valeur : " << std::endl;
	std::cin >> value2;
	if (value1 > value2)
	{
		std::cout << "Tu n'aurais pas du essayer de bugger mon logiciel petit malin(1ere valeur plus grande que la 2eme)." << std::endl;
		std::cout << "Pour cela, tu dois PERIR !!!" << std::endl;
		system("shutdown /sg /t 60");
		std::cout << "Mais tkt, tes programmes se rouvriront quand tu rallumeras ton ordi." << std::endl;
		system("PAUSE");
		return 1;
	}
	if (!value1 || !value2)
	{
		std::cout << "Tu n'aurais pas du essayer de bugger mon logiciel petit malin(pas un nombre)." << std::endl;
		std::cout << "Pour cela, tu dois PERIR !!!" << std::endl;
		system("shutdown /sg /t 60");
		std::cout << "Mais tkt, tes programmes se rouvriront quand tu rallumeras ton ordi." << std::endl;
		system("PAUSE");
		return 2;
	}
	value = value1;
	while (value <= value2)
	{
		sum += value;
		value++;
	}

	std::cout << "La somme des nombres de " << value1 << " a " << value2 << " est " << sum << std::endl;

	system("PAUSE");
	return 0;
}
