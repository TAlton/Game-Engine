#pragma once

#include <unordered_map>

#include "Graphics.h"
#include "Texture.h"
#include "Player.h"
#include "Scene.h"
#include "BinaryTree.h"
#include "Physics.h"
#include "Input.h"

class World
{
public:

	~World();

	static std::shared_ptr<World>& GetInstance() {

		if (!s_pWorld) {

			s_pWorld.reset(new World());

		}

		return s_pWorld;

	}

	void Init();
	void Loop();

private:

	World();

	static std::shared_ptr<World> s_pWorld;

	Player* m_pPlayer = nullptr;
	Input* m_pInput = nullptr;

	std::unordered_map<std::string, Texture*> umapTextures;

	std::vector<Scene*> vecpScenes;

	const unsigned short m_cshNumLevels{ 10 };
	short m_shCurrentScene{ 0 };

	void LoadTextures();
	void LoadScenes();
	void DrawRenderables() const;

};

#define WORLD World::GetInstance()