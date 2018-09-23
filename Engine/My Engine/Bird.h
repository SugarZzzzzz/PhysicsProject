//
// Bachelor of Software Engineering
// Media Design School
// Auckland
// New Zealand
//
// (c) 2005 - 2018 Media Design School
//
// File Name	:	Player.h
// Description	:	header file outlining the Player
// Author		:	Steven Cao & Vivian Ngo
// Mail 		:	steven.zha7447@mediadesign.school.nz, vivian.ngo7572@mediadesign.school.nz
//

#pragma once

#ifndef _CPLAYER_H__
#define _CPLAYER_H__

// Library Includes //

// Local Includes //
#include "Entity.h"
//#include "CGameMech.h"
// Types //

// Constants //

// Prototypes //

class CBird : public CEntity
{

public:
	CBird();
	~CBird();
	
	void InitBird(Utility::Tags _type);
	void Update2D();


	bool bIsPlayerAlive = true;
};

#endif // _CPLAYER_H__
