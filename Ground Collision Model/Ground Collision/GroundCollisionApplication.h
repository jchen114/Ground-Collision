#pragma once
#include "BulletOpenGLApplication.h"
class GroundCollisionApplication :
	public BulletOpenGLApplication
{
public:
	GroundCollisionApplication();
	GroundCollisionApplication(ProjectionMode mode);

	virtual void InitializePhysics() override;
	virtual void ShutdownPhysics() override;
	virtual void Mouse(int button, int state, int x, int y) override;

	void CreateGround();
	GameObject *CreateBox(const btVector3 &halfSize, float mass, const btVector3 &color, const btVector3 &position);

	GameObject *box = NULL;

	~GroundCollisionApplication();
};

