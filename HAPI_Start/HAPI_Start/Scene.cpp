#include "Scene.h"



Scene::~Scene(){

	for (auto& x : m_vecpenEntities) delete x;

}

void Scene::AddEntity(Entity* e) {

	m_vecpenEntities.push_back(e);

}
