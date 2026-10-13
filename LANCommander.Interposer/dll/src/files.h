#pragma once

// Install CreateFileW/A and GetFileAttributesW/A hooks.
// Called from InstallHooks() after LoadConfig() and before MH_EnableHook.
void InstallFileHooks();

// Install the ntdll NtCreateFile/NtOpenFile choke-point hooks. Same lifecycle as
// InstallFileHooks(); catches opens that bypass the Win32-level hooks.
void InstallNtFileHooks();
