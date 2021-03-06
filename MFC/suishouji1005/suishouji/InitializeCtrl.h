#pragma once


#include "StdAfx.h"
//#include "InitializeCtrl.h"


#include <string>
#include <fstream>
using namespace std;



//返回值 0  FALSE
//       1  TRUE
//       2  OTHER
//class InitializeCtrl
//{
//public:
//	InitializeCtrl(void);
//	~InitializeCtrl(void);
	int InitializeListCtrl(CListCtrl *m_list,int id,int page);
	int InitializePropertyGrid(CMFCPropertyGridCtrl *m_property,int id);
	int InitializeTreeCtrl(CTreeCtrl *m_tree,CImageList *m_imageList);
	int InitializeTreeCtrlHead(CListCtrl *m_list);
	int SavePropertyGrid(CMFCPropertyGridCtrl *m_property,int id);
	int SaveListCtrlAsFolder(const CListCtrl *m_list,int id);
	int SaveListCtrlAsFile(const CListCtrl *m_list,int id);
	int ErrorValue(int msg);
	int Getkeyval(const CString str, CString *key, CString *val );
	int GetDocFile(const CString str, CString *doc);
	void SetHtml(CString *val1, CString *val, CString *key, CString headstr,CString htmlname, int node_num);
	void SetPicHtml(CString picturepath,CString htmlname);
	void Exportword(CString strFileName, CString *val1, CString *val, CString *key, CString headstr, int node_num);
	int InitializeExcelList(CListCtrl *m_list,int id);
	void GetStrKeyVal(CString *strfile, CString addstr, int pos);
	int  GetSrollMaxHight(CString* val);
	int SetDiaryHtml(CString *diary_val, CString html_name);
	int GetTxtStr(CString *str, CString path);

	//int Delete(int id);
	//CFont DefaultFont,TitleFont,NameFont,TextFont;
//};

