#ifndef POSITION_H
#define POSITION_H

#include <sstream>

class Position
{
public:
	Position() {}
	Position(int i, int j) : x(i), y(j) {}
	Position(float i, float j) : x(i), y(j) {}

	inline const float getX() const
	{
		return this->x;
	}
	inline float getX()
	{
		return this->x;
	}
	inline const float getY() const
	{
		return this->y;
	}
	inline float getY()
	{
		return this->y;
	}

	inline void setX(float x)
	{
		this->x = x;
	}
	inline void setY(float y)
	{
		this->y = y;
	}
	inline void setX(int x)
	{
		this->x = x;
	}
	inline void setY(int y)
	{
		this->y = y;
	}

	inline void add(Position& p)
	{
		this->x += p.x;
		this->y += p.y;
	}
	inline void sub(Position& p)
	{
		this->x -= p.x;
		this->y -= p.y;
	}

	inline bool getJsonString(std::stringstream& stream) const
	{
		if (!stream.good()) return false;

		stream << "{\"x\":" << this->x << ",\"y\":" << this->y << "}";
		return true;
	}

	static inline Position add(Position& a, Position& b)
	{
		return Position(a.x + b.x, a.y + b.y);
	}
	static inline Position sub(Position& a, Position& b)
	{
		return Position(a.x - b.x, a.y - b.y);
	}

protected:

private:
	float x = 0;
	float y = 0;
};

#endif // POSITION_H
