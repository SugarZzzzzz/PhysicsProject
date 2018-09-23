//
// Bachelor of Software Engineering
// Media Design School
// Auckland
// New Zealand
//
// (c) 2005 - 2018 Media Design School
//
// File Name	:	Scene.cpp
// Description	:	main implementation for Scene
// Author		:	Steven Cao & Vivian Ngo
// Mail 		:	steven.zha7447@mediadesign.school.nz, vivian.ngo7572@mediadesign.school.nz
//
// Local Includes //
#include "Utility.h" 
#include "Camera.h"
// This Includes //
#include "Scene.h"

// Types //
using namespace std;

// Constructor //
CScene::CScene()
{


}

// Destructor //
CScene::~CScene()
{
	V_EntitiesInScene.clear();
	m_mTextList.clear();
}

void CScene::render()
{

	for (auto it : V_EntitiesInScene)
	{
		it->Render2D(CUtility::program);
	}

	for (auto it : m_mTextList)
	{
		it.second->Render();
	}

	for (auto it : m_vBirdsInScene)
	{
		it->Render2D(CUtility::program);
	}
}

void CScene::update()
{
	for (auto it : V_EntitiesInScene)
	{
		it->Update2D();
	}

	for (auto it : m_vBirdsInScene)
	{
		it->Update2D();
	}
}

void CScene::DeleteEntity(std::shared_ptr<CEntity> TobeDeleted)
{
	for (auto it = V_EntitiesInScene.begin(); it != V_EntitiesInScene.end(); it++)
	{
		if ((*it) == TobeDeleted)
		{
			V_EntitiesInScene.erase(it);
			break;
		}
	}

	for (auto it = m_vBirdsInScene.begin(); it != m_vBirdsInScene.end(); it++)
	{
		if ((*it) == TobeDeleted)
		{
			m_vBirdsInScene.erase(it);
			break;
		}
	}
}

void CScene::AddEntity(std::shared_ptr<CEntity> TobeAdded)
{
	V_EntitiesInScene.push_back(TobeAdded);
}

