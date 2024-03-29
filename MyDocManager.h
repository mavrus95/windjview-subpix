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
//	51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
//	http://www.gnu.org/copyleft/gpl.html

// $Id: MyDocManager.h,v 1.8 2009/08/09 16:54:03 zhezherun Exp $

#pragma once


// CMyDocManager

class CMyDocManager : public CDocManager
{
	DECLARE_DYNAMIC(CMyDocManager)

public:
	CMyDocManager();
	virtual ~CMyDocManager();

// Overrides
	virtual BOOL DoPromptFileName(CString& fileName, UINT nIDSTitle,
			DWORD lFlags, BOOL bOpenFileDialog, CDocTemplate* pTemplate);
	virtual CDocument* OpenDocumentFile(LPCTSTR lpszFileName);
	virtual void OnFileOpen();
};
