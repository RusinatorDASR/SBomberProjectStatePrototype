#pragma once

#include <stdint.h>

#include "DestroyableGroundObject.h"

class House : public DestroyableGroundObject
{
public:
	House() {}

	House(const House& house) {
		x = house.GetX();
		y = house.GetY();
		width = house.GetWidth();
	}

	bool __fastcall isInside(double x1, double x2) const override;

	inline uint16_t GetScore() const override { return score; }

	void Draw() const override;

	House* Clone() const;

private:

	const uint16_t score = 40;
};

