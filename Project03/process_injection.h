#pragma once

#include <string>
#include <stdio.h>
#include <Windows.h>


namespace win {

	class ProcessInjection{

	};

	class DllInjection : public ProcessInjection{
	public:
	
	};

	class ApcInjection : public ProcessInjection {
	public:
		DWORD ApcInjectionWithDll(const PROCESS_INFORMATION& process_information, std::wstring_view dll_path);
	};


} //namespace win


