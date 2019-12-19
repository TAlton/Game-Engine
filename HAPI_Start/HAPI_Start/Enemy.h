#pragma once

#include "Player.h"

class Enemy :
	public Player {

public:

	Enemy();
	Enemy(Vec2 v);
	Enemy(short x, short y);
	Enemy(int h, int x, int y, std::string id, int side) { 

		this->m_nHealth = h;
		SetPosition(x, y);
		this->m_strAlias = id;
		this->m_ESide = side;
		this->m_pRectAI = &Rectangle(this->m_nWidth << 2, this->m_nHeight);
		m_pRectAI->SetTop(-(this->m_nHeight)); //move to minus space so that it translates with the entity in the center
		m_pRectAI->SetLeft(-(this->m_nWidth << 1));

	}
	~Enemy();

	Rectangle* GetRectAI() const { return this->m_pRectAI; }


private:

	Rectangle* m_pRectAI = nullptr;


};

