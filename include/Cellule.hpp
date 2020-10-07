#ifndef DEF_CELLULE
#define DEF_CELLULE

// Cellule V1

#include <ostream>

typedef unsigned int uint;

class Cellule
{
	public:
		Cellule(bool vivante, uint x, uint y);
		Cellule(Cellule const& src);
		~Cellule();
		
		inline bool getVivante() const { return m_vivante; }
		inline uint getX() const { return m_x; }
		inline uint getY() const { return m_y; }
		
		inline void setVivante(bool vivante) { m_vivante = vivante; }
		inline void setXY(uint x, uint y) { m_x = x; m_y = y; }
		
		friend std::ostream& operator<<(std::ostream& os, Cellule const& src);
	
	private:
		bool m_vivante;
		uint m_x;
		uint m_y;
	
	protected:
		virtual void ecrire(std::ostream& os) const;
};

#endif // DEF_CELLULE
