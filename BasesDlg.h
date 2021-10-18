
// BasesDlg.h: archivo de encabezado
//
#pragma once


// Cuadro de diálogo de CBasesDlg
class CBasesDlg : public CDialogEx
{
	// Construcción
public:
	CBasesDlg(CWnd* pParent = nullptr);	// Constructor estándar

// Datos del cuadro de diálogo
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_BASES_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// Compatibilidad con DDX/DDV


// Implementación
protected:
	HICON m_hIcon;

	// Funciones de asignación de mensajes generadas
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnChangeEdtNumero();
	afx_msg void OnBnClickedRdbtnDecimal();
	afx_msg void OnBnClickedRdbtnOctal();
	afx_msg void OnBnClickedRdbtnHexadecimal();
protected:
	CEdit _CtrlResultado;
private:
	int RadioButtonAnterior = 0;
};
