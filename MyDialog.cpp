//	WinDjView
//	Copyright (C) 2004-2009 Andrew Zhezherun
//
//	This program is free software; you can redistribute it and/or modify
//	it under the terms of the GNU General Public License as published by
//	the Free Software Foundation; either version 2 of the License, or
//	(at your option) any later version.
//
//	This program is distributed in the hope that it will be useful,
//	but WITHOUT ANY WARRANTY; without even the implied warranty of
//	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//	GNU General Public License for more details.
//
//	You should have received a copy of the GNU General Public License along
//	with this program; if not, write to the Free Software Foundation, Inc.,
//	51 Franklin Street, Fifth Floor, Boston, MA 02111-1307 USA.
//	http://www.gnu.org/copyleft/gpl.html

// $Id: MyDialog.cpp,v 1.2 2009/01/28 16:59:20 zhezherun Exp $

#include "stdafx.h"
#include "WinDjView.h"
#include "MyDialog.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMyDialog

IMPLEMENT_DYNAMIC(CMyDialog, CDialog)
CMyDialog::CMyDialog()
{
}

CMyDialog::CMyDialog(LPCTSTR lpszTemplateName, CWnd* pParentWnd)
	: CDialog(lpszTemplateName, pParentWnd)
{
}

CMyDialog::CMyDialog(UINT nIDTemplate, CWnd* pParentWnd)
	: CDialog(nIDTemplate, pParentWnd)
{
}

CMyDialog::~CMyDialog()
{
}


BEGIN_MESSAGE_MAP(CMyDialog, CDialog)
END_MESSAGE_MAP()


// CMyDialog message handlers

int CMyDialog::DoModal()
{
	set<CWnd*> disabled;
	theApp.DisableTopLevelWindows(disabled);

	int nResult = CDialog::DoModal();

	theApp.EnableWindows(disabled);
	return nResult;
}
