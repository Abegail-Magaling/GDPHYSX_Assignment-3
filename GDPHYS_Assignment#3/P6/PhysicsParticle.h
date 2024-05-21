#pragma once
#include "MyVector.h"

namespace physics{

	class PhysicsParticle : public MyVector
	{
		public:
			float mass = 0;
			MyVector Velocity;
			MyVector Position;
			MyVector Acceleration;


		protected:
			void UpdatePosition(float time);
			void UpdateVelocity(float time);

		public:
			void update(float time);

	};
}

