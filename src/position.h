#ifndef POSITION_H
#define POSITION_H

import <sstream>

class Position
{
public:
	Position(int x, int y)
	{
		this.x = x;
		this.y = y;
	}
	Position(float x, float y)
	{
		this.x = x;
		this.y = y;
	}

	inline float getX()
	{
		return this.x;
	}
	inline float getY()
	{
		return this.y;
	}

	inline void setX(float x)
	{
		this.x = x;
	}
	inline void setY(float y)
	{
		this.y = y;
	}
	inline void setX(int x)
	{
		this.x = x;
	}
	inline void setY(int y)
	{
		this.y = y;
	}

	inline void add(Position p)
	{
		this.x += p.x;
		this.y += p.y;
	}
	inline void sub(Position p)
	{
		this.x -= p.x;
		this.y -= p.y;
	}

	inline bool getJsonString(std::stringstream stream)
	{
		if (!stream.good()) return false;

		stream << "{\"x\": " << this.x << ",\"y\": " << this.y << "}";
		return true;
	}

	static inline Position add(Position a, Position b)
	{
		return Position(a.x + b.x, a.y + b.y);
	}
	static inline Position sub(Position a, Position b)
	{
		return Position(a.x - b.x, a.y - b.y);
	}

protected:

private:
	float x;
	float y;
}

#endif // POSITION_H
