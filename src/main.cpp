#include "../include/Inclusions.hpp"
#include <iostream>

#define TEST_CELL(c) \
	std::cout << "L'objet " << #c << " est " << aAccGrave << " l'adresse m" << eAccAigu << "moire " << &c << std::endl \
		  << "La cellulle (" << aAccGrave << " l'adresse m" << eAccAigu << "moire " << &c << ") = {" << ((c.getVivante()) ? "vivante" : "morte") << ", " << c.getX() << "x" << c.getY() << "}" << std::endl

int main()
{
	std::cout << "==========INTERVALLES==========" << std::endl << std::endl;
	
	Itv i1;
	
	std::cout << "L'intervalle i1 est : " << i1 << " ." << std::endl;
	
	std::cout << "=====" << std::endl;
	
	std::cout << "La borne inf" << eAccAigu << "rieure de i1 est : " << i1.getBorneInferieure() << " ." << std::endl;
	std::cout << "La borne sup" << eAccAigu << "rieure de i1 est : " << i1.getBorneSuperieure() << " ." << std::endl;
	
	std::cout << "=====" << std::endl;
	
	i1.setBorneInferieure(0.5);
	i1.setBorneSuperieure(5.5);
	
	std::cout << "Les nouvelles bornes de l'intervalle i1 sont : " << i1 << " ." << std::endl;
	
	std::cout << "=====" << std::endl;
	
	std::cout << "La longueur de l'intervalle i1 est : " << i1.getLongueur() << " ." << std::endl;
	
	std::cout << "=====" << std::endl;
	
	std::cout << "La valeur -3.5 " << ((i1.appartientA(-3.5)) ? "appartient" : "n'appartient pas") << " " << aAccGrave << " l'intervalle " << i1 << " ." << std::endl;
	
	std::cout << "=====" << std::endl;
	
	Itv i2(1.3, 5.8);
	
	std::cout << "L'intervalle i2 est : " << i2 << " ." << std::endl;
	
	std::cout << "=====" << std::endl;
	
	std::cout << "i1 " << ((i1 == i2) ? "est" : "n'est pas") << " " << eAccAigu << "gal " << aAccGrave << " i2 ." << std::endl;
	
	std::cout << "=====" << std::endl;
	
	std::cout << "i1 " << ((i1.estInclusStrictement(i2)) ? "est" : "n'est pas") << " inclut dans i2 ." << std::endl;
	
	std::cout << "=====" << std::endl;
	
	std::cout << "i2 " << ((i2.estInclusStrictement(i1)) ? "est" : "n'est pas") << " inclut dans i1 ." << std::endl;
	
	std::cout << "=====" << std::endl;
	
	std::cout << "i1 " << ((i1.accoleA(i2)) ? "est" : "n'est pas") << " accol" << eAccAigu << " " << aAccGrave << " i2 ." << std::endl;
	
	std::cout << "=====" << std::endl;
	
	std::cout << "i2 " << ((i2.accoleA(i1)) ? "est" : "n'est pas") << " accol" << eAccAigu << " " << aAccGrave << " i1 ." << std::endl;
	
	std::cout << "=====" << std::endl;
	
	std::cout << "i1 " << ((i1.imbriqueAvec(i2)) ? "est" : "n'est pas") << " imbriqu" << eAccAigu << " avec i2 ." << std::endl;
	
	std::cout << "=====" << std::endl;
	
	std::cout << "i2 " << ((i2.imbriqueAvec(i1)) ? "est" : "n'est pas") << " imbriqu" << eAccAigu << " avec i1 ." << std::endl;
	
	std::cout << "=====" << std::endl;
	
	std::cout << "i1 " << ((i1 != i2) ? "est" : "n'est pas") << " disjoint " << aAccGrave << " i2 ." << std::endl;
	
	std::cout << "=====" << std::endl;
	
	i1.translation(5.4);
	
	std::cout << "i1 translat" << eAccAigu << " avec 5.4 : " << i1 << " ." << std::endl;
	
	std::cout << "=====" << std::endl;
	
	i2.translation(6.8);
	
	std::cout << "i2 translat" << eAccAigu << " avec 6.8 : " << i2 << " ." << std::endl;
	
	std::cout << std::endl << "==========CELLULES==========" << std::endl << std::endl;
	
	Cellule c1(true, 1, 2);
	
	TEST_CELL(c1);
	
	return 0;
}
