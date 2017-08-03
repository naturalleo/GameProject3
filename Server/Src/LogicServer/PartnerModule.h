﻿#ifndef __PARTNER_MODULE_H__
#define __PARTNER_MODULE_H__
#include "ModuleBase.h"
#include "..\ServerData\PartnerData.h"

struct PartnerDataObject;
class CPartnerModule  : public CModuleBase
{
public:
	CPartnerModule(CPlayerObject *pOwner);

	~CPartnerModule();

public:
	BOOL OnCreate(UINT64 u64RoleID);

	BOOL OnDestroy();

	BOOL OnLogin();

	BOOL OnLogout();

	BOOL OnNewDay();

	BOOL ReadFromLoginAck(DBRoleLoginAck &Ack);


public:
	UINT64 AddPartner(UINT32 dwPartnerID);
public:
	std::map<UINT32, PartnerDataObject*>m_mapPartnerData;


};

#endif //__PARTNER_MODULE_H__
