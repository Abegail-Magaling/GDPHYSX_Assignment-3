#include "MyVector.h"

using namespace physics;

float MyVector::Magnitude() const
{
	float x_sqr = this->x * this->x;
	float y_sqr = this->y * this->y;
	float z_sqr = this->z * this->z;
	return sqrt(x_sqr + y_sqr + z_sqr);
}

MyVector MyVector::direction() const
{
	float mag = Magnitude();
	return mag == 0 ? MyVector(0, 0, 0) : MyVector(x / mag, y / mag, z / mag);
}

MyVector MyVector::operator+(const MyVector v)
{
	return MyVector(this-> x + v.x, this->y + v.y, this->z + v.z);
}

MyVector MyVector::operator-(const MyVector v)
{
	return MyVector(this->x - v.x, this->y - v.y, this->z - v.z);
}

MyVector MyVector::operator*(const MyVector v)
{
	return MyVector(this->x * v.x, this->y * v.y, this->z * v.z);
}

MyVector MyVector::operator/(const MyVector v)
{
	return MyVector(this->x / v.x, this->y / v.y, this->z / v.z);
}

void MyVector::operator+= (const MyVector v) {
	this->x += v.x;
	this->y += v.y;
	this->z += v.z;
}

void MyVector::operator-= (const MyVector v) {
	this->x -= v.x;
	this->y -= v.y;
	this->z -= v.z;
}

MyVector physics::MyVector::ScalarMultiplication(const float toScale) const
{
	return MyVector(toScale * this->x, toScale * this->y, toScale *this->z);
}

void MyVector::operator*= (const MyVector v) {
	this->x *= v.x;
	this->y *= v.y;
	this->z *= v.z;
}

float MyVector::DotProd(const MyVector v) const
{
	float dotX = this->x * v.x;
	float dotY = this->y * v.y;
	float dotZ = this->z * v.z;
	return dotX + dotY + dotZ;
}

MyVector physics::MyVector::crossProd(const MyVector v) const
{
	float crossX = (this->y * v.z) - (this->z * v.y);
	float crossY = (this->z * v.x) - (this->x * v.z);
	float crossZ = (this->x * v.y) - (this->y * v.x);
	return MyVector(crossX, crossY, crossZ);
}
