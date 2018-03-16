/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CEntity.h"

class CFire {
public:
	bool m_bActive; // 0-1
	//specifies if this slot is in use
	bool m_bCreatedByScript; // 1-2
	//specifies if this is a script fire instance
	bool m_bMoves; // 2-3
	//specifies if this fire moves with the entity (not implemented?)
	bool m_bMakesNoise; // 3-4
	//fire makes noise
	CVector m_vecPosition; // 4-16
	//vector of fire position
	CEntity* m_pEntityTarget; // 16-20
	//pointer to the entity fire is attached to
	CEntity* m_pEntityCreator; // 20-24
	//pointer to the entity that caused the fire
	unsigned int m_nTimeToBurn; // 24-28
	//specifies when the fire stops
    unsigned int m_uShadowTimer; // 28-32
	//timer, is used for getting random numbers with an interval
    unsigned int m_uPeriodTimer; // 32-36
	//periodical effect (flame) timer
	float m_fParticleSize; // 36-40
	//size of flame particles
	float m_fStrength; // 40-44
	//current size/strength of flames
	bool m_bBeingExtinguished; // 44-45
	//does not affect anything, always set to 0
    char pad[3]; // 45-48

    CFire();
    void Extinguish();
    void ProcessFire();
};

VALIDATE_SIZE(CFire, 0x30);