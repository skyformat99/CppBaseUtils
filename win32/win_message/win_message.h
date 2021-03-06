#include <map>
typedef std::map<int, std::wstring>MIS;

inline void __init_mis(MIS&mis)
{
	mis[0x0000] = L"WM_NULL";
	mis[0x0001] = L"WM_CREATE";
	mis[0x0002] = L"WM_DESTROY";
	mis[0x0003] = L"WM_MOVE";
	mis[0x0005] = L"WM_SIZE";
	mis[0x0006] = L"WM_ACTIVATE";
	mis[0x0007] = L"WM_SETFOCUS";
	mis[0x0008] = L"WM_KILLFOCUS";
	mis[0x000A] = L"WM_ENABLE";
	mis[0x000B] = L"WM_SETREDRAW";
	mis[0x000C] = L"WM_SETTEXT";
	mis[0x000D] = L"WM_GETTEXT";
	mis[0x000E] = L"WM_GETTEXTLENGTH";
	mis[0x000F] = L"WM_PAINT";
	mis[0x0010] = L"WM_CLOSE";
	mis[0x0011] = L"WM_QUERYENDSESSION";
	mis[0x0013] = L"WM_QUERYOPEN";
	mis[0x0016] = L"WM_ENDSESSION";
	mis[0x0012] = L"WM_QUIT";
	mis[0x0014] = L"WM_ERASEBKGND";
	mis[0x0015] = L"WM_SYSCOLORCHANGE";
	mis[0x0018] = L"WM_SHOWWINDOW";
	mis[0x001A] = L"WM_WININICHANGE";
	mis[0x001B] = L"WM_DEVMODECHANGE";
	mis[0x001C] = L"WM_ACTIVATEAPP";
	mis[0x001D] = L"WM_FONTCHANGE";
	mis[0x001E] = L"WM_TIMECHANGE";
	mis[0x001F] = L"WM_CANCELMODE";
	mis[0x0020] = L"WM_SETCURSOR";
	mis[0x0021] = L"WM_MOUSEACTIVATE";
	mis[0x0022] = L"WM_CHILDACTIVATE";
	mis[0x0023] = L"WM_QUEUESYNC";
	mis[0x0024] = L"WM_GETMINMAXINFO";
	mis[0x0026] = L"WM_PAINTICON";
	mis[0x0027] = L"WM_ICONERASEBKGND";
	mis[0x0028] = L"WM_NEXTDLGCTL";
	mis[0x002A] = L"WM_SPOOLERSTATUS";
	mis[0x002B] = L"WM_DRAWITEM";
	mis[0x002C] = L"WM_MEASUREITEM";
	mis[0x002D] = L"WM_DELETEITEM";
	mis[0x002E] = L"WM_VKEYTOITEM";
	mis[0x002F] = L"WM_CHARTOITEM";
	mis[0x0030] = L"WM_SETFONT";
	mis[0x0031] = L"WM_GETFONT";
	mis[0x0032] = L"WM_SETHOTKEY";
	mis[0x0033] = L"WM_GETHOTKEY";
	mis[0x0037] = L"WM_QUERYDRAGICON";
	mis[0x0039] = L"WM_COMPAREITEM";
	mis[0x003D] = L"WM_GETOBJECT";
	mis[0x0041] = L"WM_COMPACTING";
	mis[0x0044] = L"WM_COMMNOTIFY";
	mis[0x0046] = L"WM_WINDOWPOSCHANGING";
	mis[0x0047] = L"WM_WINDOWPOSCHANGED";
	mis[0x0048] = L"WM_POWER";
	mis[0x004A] = L"WM_COPYDATA";
	mis[0x004B] = L"WM_CANCELJOURNAL";
	mis[0x004E] = L"WM_NOTIFY";
	mis[0x0050] = L"WM_INPUTLANGCHANGEREQUEST";
	mis[0x0051] = L"WM_INPUTLANGCHANGE";
	mis[0x0052] = L"WM_TCARD";
	mis[0x0053] = L"WM_HELP";
	mis[0x0054] = L"WM_USERCHANGED";
	mis[0x0055] = L"WM_NOTIFYFORMAT";
	mis[0x007B] = L"WM_CONTEXTMENU";
	mis[0x007C] = L"WM_STYLECHANGING";
	mis[0x007D] = L"WM_STYLECHANGED";
	mis[0x007E] = L"WM_DISPLAYCHANGE";
	mis[0x007F] = L"WM_GETICON";
	mis[0x0080] = L"WM_SETICON";
	mis[0x0081] = L"WM_NCCREATE";
	mis[0x0082] = L"WM_NCDESTROY";
	mis[0x0083] = L"WM_NCCALCSIZE";
	mis[0x0084] = L"WM_NCHITTEST";
	mis[0x0085] = L"WM_NCPAINT";
	mis[0x0086] = L"WM_NCACTIVATE";
	mis[0x0087] = L"WM_GETDLGCODE";
	mis[0x0088] = L"WM_SYNCPAINT";
	mis[0x00A0] = L"WM_NCMOUSEMOVE";
	mis[0x00A1] = L"WM_NCLBUTTONDOWN";
	mis[0x00A2] = L"WM_NCLBUTTONUP";
	mis[0x00A3] = L"WM_NCLBUTTONDBLCLK";
	mis[0x00A4] = L"WM_NCRBUTTONDOWN";
	mis[0x00A5] = L"WM_NCRBUTTONUP";
	mis[0x00A6] = L"WM_NCRBUTTONDBLCLK";
	mis[0x00A7] = L"WM_NCMBUTTONDOWN";
	mis[0x00A8] = L"WM_NCMBUTTONUP";
	mis[0x00A9] = L"WM_NCMBUTTONDBLCLK";
	mis[0x00AB] = L"WM_NCXBUTTONDOWN";
	mis[0x00AC] = L"WM_NCXBUTTONUP";
	mis[0x00AD] = L"WM_NCXBUTTONDBLCLK";
	mis[0x00FE] = L"WM_INPUT_DEVICE_CHANGE";
	mis[0x00FF] = L"WM_INPUT";
	mis[0x0100] = L"WM_KEYFIRST";
	mis[0x0100] = L"WM_KEYDOWN";
	mis[0x0101] = L"WM_KEYUP";
	mis[0x0102] = L"WM_CHAR";
	mis[0x0103] = L"WM_DEADCHAR";
	mis[0x0104] = L"WM_SYSKEYDOWN";
	mis[0x0105] = L"WM_SYSKEYUP";
	mis[0x0106] = L"WM_SYSCHAR";
	mis[0x0107] = L"WM_SYSDEADCHAR";
	mis[0x0109] = L"WM_UNICHAR";
	mis[0x0109] = L"WM_KEYLAST";
	mis[0x0108] = L"WM_KEYLAST";
	mis[0x010D] = L"WM_IME_STARTCOMPOSITION";
	mis[0x010E] = L"WM_IME_ENDCOMPOSITION";
	mis[0x010F] = L"WM_IME_COMPOSITION";
	mis[0x010F] = L"WM_IME_KEYLAST";
	mis[0x0110] = L"WM_INITDIALOG";
	mis[0x0111] = L"WM_COMMAND";
	mis[0x0112] = L"WM_SYSCOMMAND";
	mis[0x0113] = L"WM_TIMER";
	mis[0x0114] = L"WM_HSCROLL";
	mis[0x0115] = L"WM_VSCROLL";
	mis[0x0116] = L"WM_INITMENU";
	mis[0x0117] = L"WM_INITMENUPOPUP";
	mis[0x0119] = L"WM_GESTURE";
	mis[0x011A] = L"WM_GESTURENOTIFY";
	mis[0x011F] = L"WM_MENUSELECT";
	mis[0x0120] = L"WM_MENUCHAR";
	mis[0x0121] = L"WM_ENTERIDLE";
	mis[0x0122] = L"WM_MENURBUTTONUP";
	mis[0x0123] = L"WM_MENUDRAG";
	mis[0x0124] = L"WM_MENUGETOBJECT";
	mis[0x0125] = L"WM_UNINITMENUPOPUP";
	mis[0x0126] = L"WM_MENUCOMMAND";
	mis[0x0127] = L"WM_CHANGEUISTATE";
	mis[0x0128] = L"WM_UPDATEUISTATE";
	mis[0x0129] = L"WM_QUERYUISTATE";
	mis[0x0132] = L"WM_CTLCOLORMSGBOX";
	mis[0x0133] = L"WM_CTLCOLOREDIT";
	mis[0x0134] = L"WM_CTLCOLORLISTBOX";
	mis[0x0135] = L"WM_CTLCOLORBTN";
	mis[0x0136] = L"WM_CTLCOLORDLG";
	mis[0x0137] = L"WM_CTLCOLORSCROLLBAR";
	mis[0x0138] = L"WM_CTLCOLORSTATIC";
	mis[0x01E1] = L"MN_GETHMENU";
	mis[0x0200] = L"WM_MOUSEFIRST";
	mis[0x0200] = L"WM_MOUSEMOVE";
	mis[0x0201] = L"WM_LBUTTONDOWN";
	mis[0x0202] = L"WM_LBUTTONUP";
	mis[0x0203] = L"WM_LBUTTONDBLCLK";
	mis[0x0204] = L"WM_RBUTTONDOWN";
	mis[0x0205] = L"WM_RBUTTONUP";
	mis[0x0206] = L"WM_RBUTTONDBLCLK";
	mis[0x0207] = L"WM_MBUTTONDOWN";
	mis[0x0208] = L"WM_MBUTTONUP";
	mis[0x0209] = L"WM_MBUTTONDBLCLK";
	mis[0x020A] = L"WM_MOUSEWHEEL";
	mis[0x020B] = L"WM_XBUTTONDOWN";
	mis[0x020C] = L"WM_XBUTTONUP";
	mis[0x020D] = L"WM_XBUTTONDBLCLK";
	mis[0x020E] = L"WM_MOUSEHWHEEL";
	mis[0x020E] = L"WM_MOUSELAST";
	mis[0x020D] = L"WM_MOUSELAST";
	mis[0x020A] = L"WM_MOUSELAST";
	mis[0x0209] = L"WM_MOUSELAST";
	mis[0x0210] = L"WM_PARENTNOTIFY";
	mis[0x0211] = L"WM_ENTERMENULOOP";
	mis[0x0212] = L"WM_EXITMENULOOP";
	mis[0x0213] = L"WM_NEXTMENU";
	mis[0x0214] = L"WM_SIZING";
	mis[0x0215] = L"WM_CAPTURECHANGED";
	mis[0x0216] = L"WM_MOVING";
	mis[0x0218] = L"WM_POWERBROADCAST";
	mis[0x0219] = L"WM_DEVICECHANGE";
	mis[0x0220] = L"WM_MDICREATE";
	mis[0x0221] = L"WM_MDIDESTROY";
	mis[0x0222] = L"WM_MDIACTIVATE";
	mis[0x0223] = L"WM_MDIRESTORE";
	mis[0x0224] = L"WM_MDINEXT";
	mis[0x0225] = L"WM_MDIMAXIMIZE";
	mis[0x0226] = L"WM_MDITILE";
	mis[0x0227] = L"WM_MDICASCADE";
	mis[0x0228] = L"WM_MDIICONARRANGE";
	mis[0x0229] = L"WM_MDIGETACTIVE";
	mis[0x0230] = L"WM_MDISETMENU";
	mis[0x0231] = L"WM_ENTERSIZEMOVE";
	mis[0x0232] = L"WM_EXITSIZEMOVE";
	mis[0x0233] = L"WM_DROPFILES";
	mis[0x0234] = L"WM_MDIREFRESHMENU";
	mis[0x0240] = L"WM_TOUCH";
	mis[0x0281] = L"WM_IME_SETCONTEXT";
	mis[0x0282] = L"WM_IME_NOTIFY";
	mis[0x0283] = L"WM_IME_CONTROL";
	mis[0x0284] = L"WM_IME_COMPOSITIONFULL";
	mis[0x0285] = L"WM_IME_SELECT";
	mis[0x0286] = L"WM_IME_CHAR";
	mis[0x0288] = L"WM_IME_REQUEST";
	mis[0x0290] = L"WM_IME_KEYDOWN";
	mis[0x0291] = L"WM_IME_KEYUP";
	mis[0x02A1] = L"WM_MOUSEHOVER";
	mis[0x02A3] = L"WM_MOUSELEAVE";
	mis[0x02A0] = L"WM_NCMOUSEHOVER";
	mis[0x02A2] = L"WM_NCMOUSELEAVE";
	mis[0x02B1] = L"WM_WTSSESSION_CHANGE";
	mis[0x02c0] = L"WM_TABLET_FIRST";
	mis[0x02df] = L"WM_TABLET_LAST";
	mis[0x0300] = L"WM_CUT";
	mis[0x0301] = L"WM_COPY";
	mis[0x0302] = L"WM_PASTE";
	mis[0x0303] = L"WM_CLEAR";
	mis[0x0304] = L"WM_UNDO";
	mis[0x0305] = L"WM_RENDERFORMAT";
	mis[0x0306] = L"WM_RENDERALLFORMATS";
	mis[0x0307] = L"WM_DESTROYCLIPBOARD";
	mis[0x0308] = L"WM_DRAWCLIPBOARD";
	mis[0x0309] = L"WM_PAINTCLIPBOARD";
	mis[0x030A] = L"WM_VSCROLLCLIPBOARD";
	mis[0x030B] = L"WM_SIZECLIPBOARD";
	mis[0x030C] = L"WM_ASKCBFORMATNAME";
	mis[0x030D] = L"WM_CHANGECBCHAIN";
	mis[0x030E] = L"WM_HSCROLLCLIPBOARD";
	mis[0x030F] = L"WM_QUERYNEWPALETTE";
	mis[0x0310] = L"WM_PALETTEISCHANGING";
	mis[0x0311] = L"WM_PALETTECHANGED";
	mis[0x0312] = L"WM_HOTKEY";
	mis[0x0317] = L"WM_PRINT";
	mis[0x0318] = L"WM_PRINTCLIENT";
	mis[0x0319] = L"WM_APPCOMMAND";
	mis[0x031A] = L"WM_THEMECHANGED";
	mis[0x031D] = L"WM_CLIPBOARDUPDATE";
	mis[0x031E] = L"WM_DWMCOMPOSITIONCHANGED";
	mis[0x031F] = L"WM_DWMNCRENDERINGCHANGED";
	mis[0x0320] = L"WM_DWMCOLORIZATIONCOLORCHANGED";
	mis[0x0321] = L"WM_DWMWINDOWMAXIMIZEDCHANGE";
	mis[0x0323] = L"WM_DWMSENDICONICTHUMBNAIL";
	mis[0x0326] = L"WM_DWMSENDICONICLIVEPREVIEWBITMAP";
	mis[0x033F] = L"WM_GETTITLEBARINFOEX";
	mis[0x0358] = L"WM_HANDHELDFIRST";
	mis[0x035F] = L"WM_HANDHELDLAST";
	mis[0x0360] = L"WM_AFXFIRST";
	mis[0x037F] = L"WM_AFXLAST";
	mis[0x0380] = L"WM_PENWINFIRST";
	mis[0x038F] = L"WM_PENWINLAST";
	mis[0x8000] = L"WM_APP";
	mis[0x0400] = L"WM_USER";
}

	//MIS mis;
	//__init_mis(mis);