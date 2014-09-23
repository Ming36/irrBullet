// Copyright (C) 2014- Danyal Zia
// Copyright (C) 2009-2013 Josiah Hartzell (Skyreign Software)
// This file is part of the "irrBullet" Bullet physics wrapper.
// For conditions of distribution and use, see copyright notice in irrBullet.h
// The above copyright notice and its accompanying information must remain here.

#pragma once

#include "ICollisionShape.h"

class ICapsuleShape : public ICollisionShape {
public:
	virtual ~ICapsuleShape();

protected:
	virtual void createShape(bool overrideMargin) = 0;
};
