// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


#include "stdafx.h"
#include "mscomm.h"

/////////////////////////////////////////////////////////////////////////////
// m_Comm1

IMPLEMENT_DYNCREATE(m_Comm1, CWnd)

/////////////////////////////////////////////////////////////////////////////
// m_Comm1 properties

/////////////////////////////////////////////////////////////////////////////
// m_Comm1 operations

void m_Comm1::SetCDHolding(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x1, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
				 bNewValue);
}

BOOL m_Comm1::GetCDHolding()
{
	BOOL result;
	InvokeHelper(0x1, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void m_Comm1::SetCommID(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x3, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
				 nNewValue);
}

long m_Comm1::GetCommID()
{
	long result;
	InvokeHelper(0x3, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void m_Comm1::SetCommPort(short nNewValue)
{
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0x4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
				 nNewValue);
}

short m_Comm1::GetCommPort()
{
	short result;
	InvokeHelper(0x4, DISPATCH_PROPERTYGET, VT_I2, (void*)&result, NULL);
	return result;
}

void m_Comm1::SetCTSHolding(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x5, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
				 bNewValue);
}

BOOL m_Comm1::GetCTSHolding()
{
	BOOL result;
	InvokeHelper(0x5, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void m_Comm1::SetDSRHolding(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x7, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
				 bNewValue);
}

BOOL m_Comm1::GetDSRHolding()
{
	BOOL result;
	InvokeHelper(0x7, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void m_Comm1::SetDTREnable(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x9, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
				 bNewValue);
}

BOOL m_Comm1::GetDTREnable()
{
	BOOL result;
	InvokeHelper(0x9, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void m_Comm1::SetHandshaking(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xa, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
				 nNewValue);
}

long m_Comm1::GetHandshaking()
{
	long result;
	InvokeHelper(0xa, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void m_Comm1::SetInBufferSize(short nNewValue)
{
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0xb, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
				 nNewValue);
}

short m_Comm1::GetInBufferSize()
{
	short result;
	InvokeHelper(0xb, DISPATCH_PROPERTYGET, VT_I2, (void*)&result, NULL);
	return result;
}

void m_Comm1::SetInBufferCount(short nNewValue)
{
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0xc, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
				 nNewValue);
}

short m_Comm1::GetInBufferCount()
{
	short result;
	InvokeHelper(0xc, DISPATCH_PROPERTYGET, VT_I2, (void*)&result, NULL);
	return result;
}

void m_Comm1::SetBreak(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0xd, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
				 bNewValue);
}

BOOL m_Comm1::GetBreak()
{
	BOOL result;
	InvokeHelper(0xd, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void m_Comm1::SetInputLen(short nNewValue)
{
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0xe, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
				 nNewValue);
}

short m_Comm1::GetInputLen()
{
	short result;
	InvokeHelper(0xe, DISPATCH_PROPERTYGET, VT_I2, (void*)&result, NULL);
	return result;
}

void m_Comm1::SetNullDiscard(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x10, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
				 bNewValue);
}

BOOL m_Comm1::GetNullDiscard()
{
	BOOL result;
	InvokeHelper(0x10, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void m_Comm1::SetOutBufferSize(short nNewValue)
{
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0x11, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
				 nNewValue);
}

short m_Comm1::GetOutBufferSize()
{
	short result;
	InvokeHelper(0x11, DISPATCH_PROPERTYGET, VT_I2, (void*)&result, NULL);
	return result;
}

void m_Comm1::SetOutBufferCount(short nNewValue)
{
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0x12, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
				 nNewValue);
}

short m_Comm1::GetOutBufferCount()
{
	short result;
	InvokeHelper(0x12, DISPATCH_PROPERTYGET, VT_I2, (void*)&result, NULL);
	return result;
}

void m_Comm1::SetParityReplace(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x13, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
				 lpszNewValue);
}

CString m_Comm1::GetParityReplace()
{
	CString result;
	InvokeHelper(0x13, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void m_Comm1::SetPortOpen(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x14, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
				 bNewValue);
}

BOOL m_Comm1::GetPortOpen()
{
	BOOL result;
	InvokeHelper(0x14, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void m_Comm1::SetRThreshold(short nNewValue)
{
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0x15, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
				 nNewValue);
}

short m_Comm1::GetRThreshold()
{
	short result;
	InvokeHelper(0x15, DISPATCH_PROPERTYGET, VT_I2, (void*)&result, NULL);
	return result;
}

void m_Comm1::SetRTSEnable(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x16, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
				 bNewValue);
}

BOOL m_Comm1::GetRTSEnable()
{
	BOOL result;
	InvokeHelper(0x16, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void m_Comm1::SetSettings(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x17, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
				 lpszNewValue);
}

CString m_Comm1::GetSettings()
{
	CString result;
	InvokeHelper(0x17, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void m_Comm1::SetSThreshold(short nNewValue)
{
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0x18, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
				 nNewValue);
}

short m_Comm1::GetSThreshold()
{
	short result;
	InvokeHelper(0x18, DISPATCH_PROPERTYGET, VT_I2, (void*)&result, NULL);
	return result;
}

void m_Comm1::SetOutput(const VARIANT& newValue)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x19, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
				 &newValue);
}

VARIANT m_Comm1::GetOutput()
{
	VARIANT result;
	InvokeHelper(0x19, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

void m_Comm1::SetInput(const VARIANT& newValue)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x1a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
				 &newValue);
}

VARIANT m_Comm1::GetInput()
{
	VARIANT result;
	InvokeHelper(0x1a, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

void m_Comm1::SetCommEvent(short nNewValue)
{
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0x1b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
				 nNewValue);
}

short m_Comm1::GetCommEvent()
{
	short result;
	InvokeHelper(0x1b, DISPATCH_PROPERTYGET, VT_I2, (void*)&result, NULL);
	return result;
}

void m_Comm1::SetEOFEnable(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x1c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
				 bNewValue);
}

BOOL m_Comm1::GetEOFEnable()
{
	BOOL result;
	InvokeHelper(0x1c, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void m_Comm1::SetInputMode(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x1d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
				 nNewValue);
}

long m_Comm1::GetInputMode()
{
	long result;
	InvokeHelper(0x1d, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}
