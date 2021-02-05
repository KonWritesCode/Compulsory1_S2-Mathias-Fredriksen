#pragma once

struct Vector2 {
	float x, y;

	Vector2(float x, float y) : x(x), y(y) {}

	Vector2 operator+(const Vector2& other) const {
		return Vector2(x + other.x, y + other.y);
	} // makes it so that you can write "var1 + var2", instead of "(var1.x + var2.x, var1.y + var2.y)"

	Vector2 operator*(const Vector2& other) const {
		return Vector2(x * other.x, y * other.y);
	} // makes it so that you can write "var1 * var2", instead of "(var1.x * var2.x, var1.y * var2.y)"

	Vector2 operator/(const Vector2& other) const {
		return Vector2(x / other.x, y / other.y);
	} // makes it so that you can write "var1 / var2", instead of "(var1.x / var2.x, var1.y / var2.y)"
};