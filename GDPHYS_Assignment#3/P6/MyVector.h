#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include "cmath"

namespace physics {
	class MyVector{
		public:
			float x, y, z;

			//MyVector() : x(0), y(-300), z(0) {}
			MyVector(const float x = 0, const float y = 0, const float z = 0) : x(x), y(y), z(z) {}
			
			explicit operator glm::vec3() const { return glm::vec3(x, y, z); }

			//Magnitude
			float Magnitude() const;

			//Direction
			MyVector direction() const;

			//Base Plus
			MyVector operator+(const MyVector v);

			//Base Subtraction
			MyVector operator-(const MyVector v);
			
			//Base Multiplication
			MyVector operator*(const MyVector v);

			//Base Division
			MyVector operator/(const MyVector v);

			//Vector Addition
			void operator+= (const MyVector v);

			//Vector Subtraction
			void operator-= (const MyVector v);

			//Scalar Multiplication
			MyVector ScalarMultiplication(const float toScale) const;

			//Component Product
			void operator*= (const MyVector v);

			//Scalar Product (Dot Product)
			float DotProd(const MyVector v) const;

			//Vector Product (Cross Product)
			MyVector crossProd(const MyVector v) const;



	};
}


