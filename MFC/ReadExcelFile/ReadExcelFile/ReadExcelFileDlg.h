
// ReadExcelFileDlg.h : ͷ�ļ�
//

#pragma once
#include <vector>

// CReadExcelFileDlg �Ի���
class CReadExcelFileDlg : public CDialogEx
{
// ����
public:
	CReadExcelFileDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_READEXCELFILE_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedButton5();
	void startThread(std::vector<CString> name, CString sourcePath, CString savePath, int type);
	static void moveFileThread(void *args);
	std::vector<CString> aviName;
	CString sourcePath;
	CString savePath;
	int moveType;
	int m_type;
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};