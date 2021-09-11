#include <Windows.h>
#include <cstdio>

#pragma once

template<typename T> struct TArray;
struct FNameEntry;
class UObject;

class SDKInitializer
{
private:
	BYTE* ModuleBase;

	BYTE* GetModuleBaseAddress(wchar_t* moduleName)
	{
		auto pid = GetCurrentProcessId();

		HANDLE snapshot = CreateToolhelp32Snapshot(TH32CS_SNAPMODULE, pid);
		BYTE* baseAddress = nullptr;

		if (INVALID_HANDLE_VALUE != snapshot)
		{
			MODULEENTRY32 moduleEntry = { 0 };
			moduleEntry.dwSize = sizeof(MODULEENTRY32);

			if (Module32First(snapshot, &moduleEntry))
			{
				do
				{
					if (0 == wcscmp(moduleEntry.szModule, moduleName))
					{
						baseAddress = moduleEntry.modBaseAddr;
						break;
					}
				} while (Module32Next(snapshot, &moduleEntry));
			}
			CloseHandle(snapshot);
		}

		return baseAddress;
	}

	SDKInitializer()
	{
		ModuleBase = GetModuleBaseAddress(L"MassEffect1.exe");
	}

public:

	FNameEntry** GetBioNamePools() const noexcept
	{
		return &*(FNameEntry**)(ModuleBase + 0x16A2090);
	}
	struct TArray<class UObject*>* GetObjects() const noexcept
	{
		return &*(struct TArray<class UObject*>*)(ModuleBase + 0x1770670);
	}

	static SDKInitializer* Instance()
	{
		static SDKInitializer* initializer = nullptr;
		if (!initializer)
		{
			initializer = new SDKInitializer{};
		}
		return initializer;
	}
};
