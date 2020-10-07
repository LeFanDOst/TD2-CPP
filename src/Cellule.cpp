#include "../include/Cellule.hpp"

// Cellule V1

Cellule::Cellule(bool vivante, uint x, uint y) : m_vivante(vivante), m_x(x), m_y(y) {}

Cellule::Cellule(Cellule const& src) : Cellule(src.m_vivante, src.m_x, src.m_y) {}

Cellule::~Cellule() {}


std::ostream& operator<<(std::ostream& os, Cellule const& src)
{
	src.ecrire(os);
	
	return os;
}


void Cellule::ecrire(std::ostream& os) const
{
	os << "{" << ((m_vivante) ? "vivante" : "morte") << ", " << m_x << "x" << m_y << "}";
}
