#pragma once

#include <stdint.h>

#include "DestroyableGroundObject.h"

class Tank : public DestroyableGroundObject
{
public:
	Tank() {}

	Tank(const Tank& tank) {
		x = tank.GetX();
		y = tank.GetY();
		width = tank.GetWidth();
	}

	bool __fastcall isInside(double x1, double x2) const override;

	inline uint16_t GetScore() const override { return score; }

	void Draw() const override;

	Tank* Clone() const;

private:

	const uint16_t score = 30;
};

