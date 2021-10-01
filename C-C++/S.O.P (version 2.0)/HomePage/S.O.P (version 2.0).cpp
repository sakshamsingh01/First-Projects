#include <windows.h>

LRESULT CALLBACK WndProc(HWND hwnd, UINT Message, WPARAM wParam, LPARAM lParam)
{ 
    STARTUPINFO startInfo;
    PROCESS_INFORMATION processInfo;
    BOOL bScucces;
    switch(Message) 
	{
		case WM_CREATE:
			CreateWindow("BUTTON","CALCULATOR",WS_VISIBLE | WS_CHILD | WS_BORDER, 0,0,500,200, hwnd, (HMENU) 1, NULL, NULL);
			CreateWindow("BUTTON","MAGIC",WS_VISIBLE | WS_CHILD | WS_BORDER, 500,0,520,240, hwnd, (HMENU) 2, NULL, NULL);
			CreateWindow("BUTTON","RIDDLES",WS_VISIBLE | WS_CHILD | WS_BORDER, 1020,0,240,470, hwnd, (HMENU) 3, NULL, NULL);
			CreateWindow("BUTTON","WORD GUESSER",WS_VISIBLE | WS_CHILD | WS_BORDER, 500,240,520,230, hwnd, (HMENU) 4, NULL, NULL);
			CreateWindow("BUTTON","THE C++ QUIZ",WS_VISIBLE | WS_CHILD | WS_BORDER, 0,200,260,270, hwnd, (HMENU) 5, NULL, NULL);
			CreateWindow("BUTTON","HUNGRY SNAKE",WS_VISIBLE | WS_CHILD | WS_BORDER, 0,470,400,230, hwnd, (HMENU) 6, NULL, NULL);
			CreateWindow("BUTTON","MUSIC",WS_VISIBLE | WS_CHILD | WS_BORDER, 400,470,440,120, hwnd, (HMENU) 7, NULL, NULL);
			CreateWindow("BUTTON","FORTUNE LUCK",WS_VISIBLE | WS_CHILD | WS_BORDER, 840,470,420,120, hwnd, (HMENU) 8, NULL, NULL);
			CreateWindow("BUTTON","NOTES",WS_VISIBLE | WS_CHILD | WS_BORDER, 400,590,860,110, hwnd, (HMENU) 9, NULL, NULL);
			CreateWindow("BUTTON","CALANDER",WS_VISIBLE | WS_CHILD | WS_BORDER, 260,200,240,270, hwnd, (HMENU) 10, NULL, NULL);
			CreateWindow("BUTTON","Help",WS_VISIBLE | WS_CHILD | WS_BORDER, 1270,10,86,86, hwnd, (HMENU) 11, NULL, NULL);
			CreateWindow("BUTTON","Time",WS_VISIBLE | WS_CHILD | WS_BORDER, 1270,106,86,86, hwnd, (HMENU) 12, NULL, NULL);
			CreateWindow("BUTTON","Internet",WS_VISIBLE | WS_CHILD | WS_BORDER, 1270,202,86,86, hwnd, (HMENU) 13, NULL, NULL);
			CreateWindow("BUTTON","Rights",WS_VISIBLE | WS_CHILD | WS_BORDER, 1270,296,86,86, hwnd, (HMENU) 14, NULL, NULL);
			CreateWindow("BUTTON","Refresh",WS_VISIBLE | WS_CHILD | WS_BORDER, 1270,392,86,86, hwnd, (HMENU) 15, NULL, NULL);
			CreateWindow("BUTTON","Credits",WS_VISIBLE | WS_CHILD | WS_BORDER, 1270,488,86,86, hwnd, (HMENU) 16, NULL, NULL);
			CreateWindow("BUTTON","Power",WS_VISIBLE | WS_CHILD | WS_BORDER, 1270,584,86,86, hwnd, (HMENU) 17, NULL, NULL);
	        break;
			
	    case WM_COMMAND:
	    {
	        switch(LOWORD(wParam))
			{
				case 1:
					startInfo = {0};
                    processInfo = {0};
                    bScucces = CreateProcess(TEXT("C:\\S.O.P (version 2.0)\\Applications\\CALCULATOR\\S.O.P (version 2.0).exe"),NULL,NULL,NULL,FALSE,NULL,NULL,NULL,&startInfo,&processInfo);
                    break;
                case 2:
                	startInfo = {0};
                    processInfo = {0};
                    bScucces = CreateProcess(TEXT("C:\\S.O.P (version 2.0)\\Applications\\MAGIC\\S.O.P (version 2.0).exe"),NULL,NULL,NULL,FALSE,NULL,NULL,NULL,&startInfo,&processInfo);
                	break;
				case 3:
					startInfo = {0};
                    processInfo = {0};
                    bScucces = CreateProcess(TEXT("C:\\S.O.P (version 2.0)\\Applications\\RIDDLES\\S.O.P (version 2.0).exe"),NULL,NULL,NULL,FALSE,NULL,NULL,NULL,&startInfo,&processInfo);
                	break;
				case 4:
					startInfo = {0};
                    processInfo = {0};
                    bScucces = CreateProcess(TEXT("C:\\S.O.P (version 2.0)\\Applications\\WORD GUESSER\\S.O.P (version 2.0).exe"),NULL,NULL,NULL,FALSE,NULL,NULL,NULL,&startInfo,&processInfo);
                	break;
				case 5:
					startInfo = {0};
                    processInfo = {0};
                    bScucces = CreateProcess(TEXT("C:\\S.O.P (version 2.0)\\Applications\\QUIZ\\S.O.P (version 2.0).exe"),NULL,NULL,NULL,FALSE,NULL,NULL,NULL,&startInfo,&processInfo);
                	break;
				case 6:
					startInfo = {0};
                    processInfo = {0};
                    bScucces = CreateProcess(TEXT("C:\\S.O.P (version 2.0)\\Applications\\HUNGRY SNAKE\\S.O.P (version 2.0).exe"),NULL,NULL,NULL,FALSE,NULL,NULL,NULL,&startInfo,&processInfo);
                	break;
				case 7:
					startInfo = {0};
                    processInfo = {0};
                    bScucces = CreateProcess(TEXT("C:\\S.O.P (version 2.0)\\Applications\\MUSIC\\S.O.P (version 2.0).exe"),NULL,NULL,NULL,FALSE,NULL,NULL,NULL,&startInfo,&processInfo);
                	break;
				case 8:
					startInfo = {0};
                    processInfo = {0};
                    bScucces = CreateProcess(TEXT("C:\\S.O.P (version 2.0)\\Applications\\FORTUNE LUCK\\S.O.P (version 2.0).exe"),NULL,NULL,NULL,FALSE,NULL,NULL,NULL,&startInfo,&processInfo);
                	break;
				case 9:
					startInfo = {0};
                    processInfo = {0};
                    bScucces = CreateProcess(TEXT("C:\\S.O.P (version 2.0)\\Applications\\NOTES\\S.O.P (version 2.0).exe"),NULL,NULL,NULL,FALSE,NULL,NULL,NULL,&startInfo,&processInfo);
                	break;
				case 10:
					startInfo = {0};
                    processInfo = {0};
                    bScucces = CreateProcess(TEXT("C:\\S.O.P (version 2.0)\\Applications\\CALANDER\\S.O.P (version 2.0).exe"),NULL,NULL,NULL,FALSE,NULL,NULL,NULL,&startInfo,&processInfo);
                	break;
				case 11:
					startInfo = {0};
                    processInfo = {0};
                    bScucces = CreateProcess(TEXT("C:\\S.O.P (version 2.0)\\Applications\\Help\\S.O.P (version 2.0).exe"),NULL,NULL,NULL,FALSE,NULL,NULL,NULL,&startInfo,&processInfo);
                	break;
				case 12: 
				   startInfo = {0};
                    processInfo = {0};
                    bScucces = CreateProcess(TEXT("C:\\S.O.P (version 2.0)\\Applications\\Time\\S.O.P (version 2.0).exe"),NULL,NULL,NULL,FALSE,NULL,NULL,NULL,&startInfo,&processInfo);
                	break;
                case 13:
                	startInfo = {0};
                    processInfo = {0};
                    bScucces = CreateProcess(TEXT("C:\\S.O.P (version 2.0)\\Applications\\Internet\\S.O.P (version 2.0).exe"),NULL,NULL,NULL,FALSE,NULL,NULL,NULL,&startInfo,&processInfo);
                	break;
                case 14:
                	startInfo = {0};
                    processInfo = {0};
                    bScucces = CreateProcess(TEXT("C:\\S.O.P (version 2.0)\\Applications\\Rights\\S.O.P (version 2.0).exe"),NULL,NULL,NULL,FALSE,NULL,NULL,NULL,&startInfo,&processInfo);
                	break;
				case 15:
					startInfo = {0};
                    processInfo = {0};
                    bScucces = CreateProcess(TEXT("C:\\S.O.P (version 2.0)\\Applications\\Refresh\\S.O.P (version 2.0).exe"),NULL,NULL,NULL,FALSE,NULL,NULL,NULL,&startInfo,&processInfo);
                	PostQuitMessage(0);
					break;
				case 16:
					startInfo = {0};
                    processInfo = {0};
                    bScucces = CreateProcess(TEXT("C:\\S.O.P (version 2.0)\\Applications\\Credits\\S.O.P (version 2.0).exe"),NULL,NULL,NULL,FALSE,NULL,NULL,NULL,&startInfo,&processInfo);
                	break;
				case 17:
					PostQuitMessage(0);
                	break;   	
			}	
		}
		
			
		case WM_DESTROY: {
			
			break;
		}
		
		default:
			return DefWindowProc(hwnd, Message, wParam, lParam);
	}		
	return 0;
}

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
	WNDCLASSEX wc;
	HWND hwnd;
	MSG msg; 

	memset(&wc,0,sizeof(wc));
	wc.cbSize		 = sizeof(WNDCLASSEX);
	wc.lpfnWndProc	 = WndProc; 
	wc.hInstance	 = hInstance;
	wc.hCursor		 = LoadCursor(NULL, IDC_ARROW);
	
	wc.hbrBackground = (HBRUSH)(COLOR_WINDOW+1);
	wc.lpszClassName = "WindowClass";
	wc.hIcon		 = LoadIcon(NULL, IDI_APPLICATION);
	wc.hIconSm		 = LoadIcon(NULL, IDI_APPLICATION);

	if(!RegisterClassEx(&wc)) {
		MessageBox(NULL, "Window Registration Failed!","Error!",MB_ICONEXCLAMATION|MB_OK);
		return 0;
	}

	hwnd = CreateWindowEx(WS_EX_CLIENTEDGE,"WindowClass","S.O.P (version 2.0)",WS_VISIBLE|WS_OVERLAPPEDWINDOW,
		CW_USEDEFAULT,
		CW_USEDEFAULT,
		1366, 
		768, 
		NULL,NULL,hInstance,NULL);

	if(hwnd == NULL) {
		MessageBox(NULL, "Window Creation Failed!","Error!",MB_ICONEXCLAMATION|MB_OK);
		return 0;
	}

	while(GetMessage(&msg, NULL, 0, 0) > 0) { 
		TranslateMessage(&msg); 
		DispatchMessage(&msg); 
	}
	return msg.wParam;
}
