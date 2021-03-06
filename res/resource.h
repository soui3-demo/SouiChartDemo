//stamp:0756d90dcf98c5c5
/*<------------------------------------------------------------------------------------------------->*/
/*该文件由uiresbuilder生成，请不要手动修改*/
/*<------------------------------------------------------------------------------------------------->*/
#pragma once
#include <res.mgr/snamedvalue.h>
#define ROBJ_IN_CPP \
namespace SOUI \
{\
    const _R R;\
    const _UIRES UIRES;\
}
namespace SOUI
{
	class _UIRES{
		public:
		class _UIDEF{
			public:
			_UIDEF(){
				XML_INIT = _T("UIDEF:XML_INIT");
			}
			const TCHAR * XML_INIT;
		}UIDEF;
		class _LAYOUT{
			public:
			_LAYOUT(){
				XML_MAINWND = _T("LAYOUT:XML_MAINWND");
			}
			const TCHAR * XML_MAINWND;
		}LAYOUT;
		class _values{
			public:
			_values(){
				string = _T("values:string");
				color = _T("values:color");
				skin = _T("values:skin");
			}
			const TCHAR * string;
			const TCHAR * color;
			const TCHAR * skin;
		}values;
		class _IMG{
			public:
			_IMG(){
				TabCtrl_png = _T("IMG:TabCtrl_png");
			}
			const TCHAR * TabCtrl_png;
		}IMG;
		class _ICON{
			public:
			_ICON(){
				ICON_LOGO = _T("ICON:ICON_LOGO");
			}
			const TCHAR * ICON_LOGO;
		}ICON;
	};
	const SNamedID::NAMEDVALUE namedXmlID[]={
		{L"Curve1",65544},
		{L"Curve2",65545},
		{L"Curve3",65546},
		{L"Curve4",65547},
		{L"Line1",65540},
		{L"Line2",65541},
		{L"Line3",65542},
		{L"Line4",65543},
		{L"_name_start",65535},
		{L"bar1",65548},
		{L"bar2",65549},
		{L"bar3",65550},
		{L"bar4",65551},
		{L"btn_close",65536},
		{L"btn_max",65537},
		{L"btn_min",65539},
		{L"btn_restore",65538},
		{L"pie1",65552},
		{L"pie2",65553},
		{L"pie3",65554},
		{L"pie4",65555}		};
	class _R{
	public:
		class _name{
		public:
		_name(){
			Curve1 = namedXmlID[0].strName;
			Curve2 = namedXmlID[1].strName;
			Curve3 = namedXmlID[2].strName;
			Curve4 = namedXmlID[3].strName;
			Line1 = namedXmlID[4].strName;
			Line2 = namedXmlID[5].strName;
			Line3 = namedXmlID[6].strName;
			Line4 = namedXmlID[7].strName;
			_name_start = namedXmlID[8].strName;
			bar1 = namedXmlID[9].strName;
			bar2 = namedXmlID[10].strName;
			bar3 = namedXmlID[11].strName;
			bar4 = namedXmlID[12].strName;
			btn_close = namedXmlID[13].strName;
			btn_max = namedXmlID[14].strName;
			btn_min = namedXmlID[15].strName;
			btn_restore = namedXmlID[16].strName;
			pie1 = namedXmlID[17].strName;
			pie2 = namedXmlID[18].strName;
			pie3 = namedXmlID[19].strName;
			pie4 = namedXmlID[20].strName;
		}
		 const wchar_t * Curve1;
		 const wchar_t * Curve2;
		 const wchar_t * Curve3;
		 const wchar_t * Curve4;
		 const wchar_t * Line1;
		 const wchar_t * Line2;
		 const wchar_t * Line3;
		 const wchar_t * Line4;
		 const wchar_t * _name_start;
		 const wchar_t * bar1;
		 const wchar_t * bar2;
		 const wchar_t * bar3;
		 const wchar_t * bar4;
		 const wchar_t * btn_close;
		 const wchar_t * btn_max;
		 const wchar_t * btn_min;
		 const wchar_t * btn_restore;
		 const wchar_t * pie1;
		 const wchar_t * pie2;
		 const wchar_t * pie3;
		 const wchar_t * pie4;
		}name;

		class _id{
		public:
		const static int Curve1	=	65544;
		const static int Curve2	=	65545;
		const static int Curve3	=	65546;
		const static int Curve4	=	65547;
		const static int Line1	=	65540;
		const static int Line2	=	65541;
		const static int Line3	=	65542;
		const static int Line4	=	65543;
		const static int _name_start	=	65535;
		const static int bar1	=	65548;
		const static int bar2	=	65549;
		const static int bar3	=	65550;
		const static int bar4	=	65551;
		const static int btn_close	=	65536;
		const static int btn_max	=	65537;
		const static int btn_min	=	65539;
		const static int btn_restore	=	65538;
		const static int pie1	=	65552;
		const static int pie2	=	65553;
		const static int pie3	=	65554;
		const static int pie4	=	65555;
		}id;

		class _string{
		public:
		const static int title	=	0;
		const static int ver	=	1;
		}string;

		class _color{
		public:
		const static int blue	=	0;
		const static int gray	=	1;
		const static int green	=	2;
		const static int red	=	3;
		const static int white	=	4;
		}color;

	};

#ifdef R_IN_CPP
	 extern const _R R;
	 extern const _UIRES UIRES;
#else
	 extern const __declspec(selectany) _R & R = _R();
	 extern const __declspec(selectany) _UIRES & UIRES = _UIRES();
#endif//R_IN_CPP
}
