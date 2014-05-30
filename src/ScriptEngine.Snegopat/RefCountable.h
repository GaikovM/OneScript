#pragma once
#include "Snegopat_h.h"

class RefCountable
{
private:
	ULONG m_refCount;

protected:

	virtual void OnZeroCount();
	virtual HRESULT IUnknownQueried(REFIID riid, void** ppObj);

public:
	
	RefCountable(void);
	virtual ~RefCountable(void);

    virtual ULONG   __stdcall AddRef();
    virtual ULONG   __stdcall Release();

};

