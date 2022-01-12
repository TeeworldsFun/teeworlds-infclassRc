/* (c) Magnus Auvinen. See licence.txt in the root of the distribution for more information. */
/* If you are missing that file, acquire a complete release at teeworlds.com.                */
#ifndef GAME_SERVER_ENTITIES_TC_H
#define GAME_SERVER_ENTITIES_TC_H

#include "infcentity.h"


class CTC : public CEntity
{
public:
	CTC(CGameWorld *pGameWorld, vec2 Pos);

	virtual void Reset();
	virtual void Tick();
	virtual void Snap(int SnappingClient);

private:
    vec2 m_StartPos;
    vec2 m_aFrom[5];
    vec2 m_aTo[5];

    int m_IDs[4];
	int m_aIDs[5];
	int m_Owner;
};

#endif