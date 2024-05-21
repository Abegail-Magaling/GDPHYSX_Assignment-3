#include "PhysicsParticle.h"

using namespace physics;

void PhysicsParticle::UpdatePosition(float time)
{
	/*float newTime = time * time;
	this->Acceleration.x = this->Acceleration.ScalarMultiplication(newTime).x /2;
	this->Acceleration.y = this->Acceleration.ScalarMultiplication(newTime).y /2;
	this->Acceleration.z = this->Acceleration.ScalarMultiplication(newTime).z /2;
	this->Velocity = this->Velocity.ScalarMultiplication(time);
	this->Position += this->Velocity;
	this->Position += this->Acceleration;*/

	float newTime = time * time;
	this->Position = this->Position + (this->Velocity.ScalarMultiplication(time)) + ((this->Acceleration.ScalarMultiplication(newTime)).ScalarMultiplication(0.5f));
}

void PhysicsParticle::UpdateVelocity(float time)
{
	this->Velocity = this->Velocity + (this->Acceleration.ScalarMultiplication(time));
}

void physics::PhysicsParticle::update(float time)
{
	this->UpdatePosition(time);
	this->UpdateVelocity(time);
}
