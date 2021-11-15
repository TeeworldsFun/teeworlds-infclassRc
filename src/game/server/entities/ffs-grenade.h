#ifndef GAME_SERVER_ENTITIES_FFSGRENADE_H
#define GAME_SERVER_ENTITIES_FFSGRENADE_H

class CFFSGrenade : public CEntity
{
public:
	int m_Owner;
	
public:
	CFFSGrenade(CGameWorld *pGameWorld, int Owner, vec2 Pos, vec2 Dir);

	vec2 GetPos(float Time);
	void FillInfo(CNetObj_Projectile *pProj);

	virtual void Reset();
	virtual void Tick();
	virtual void TickPaused();
	virtual void Explode();
	virtual void Snap(int SnappingClient);

private:
	vec2 m_ActualPos;
	vec2 m_ActualDir;
	vec2 m_Direction;
	int m_StartTick;
};

#endif
