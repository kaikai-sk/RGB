// RGBDlg.h : header file
//

#if !defined(AFX_RGBDLG_H__B4E09EF6_C5A7_48F2_9025_B109C26DBE02__INCLUDED_)
#define AFX_RGBDLG_H__B4E09EF6_C5A7_48F2_9025_B109C26DBE02__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CRGBDlg dialog

class CRGBDlg : public CDialog
{
// Construction
public:
	void UpdateArea();
	CRGBDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CRGBDlg)
	enum { IDD = IDD_RGB_DIALOG };
	CSliderCtrl	m_SliB;
	CSliderCtrl	m_SliG;
	CSliderCtrl	m_SliR;
	CStatic	m_Area;
	UINT	m_R;
	UINT	m_G;
	UINT	m_B;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CRGBDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CRGBDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnHScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar);
	afx_msg void OnChangeEditB();
	afx_msg void OnChangeEditG();
	afx_msg void OnChangeEditR();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
private:
	COLORREF m_CColor;
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_RGBDLG_H__B4E09EF6_C5A7_48F2_9025_B109C26DBE02__INCLUDED_)
