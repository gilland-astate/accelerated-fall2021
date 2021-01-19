# Using VSCode with WSL

## VS Code 
Download: https://code.visualstudio.com/

## Enabling and Installing WSL
Step-By-Step Guide: https://docs.microsoft.com/en-us/windows/wsl/install-win10

1. Run Powershell as Admin
2. Copy/Paste in Powershell:  
> dism.exe /online /enable-feature /featurename:Microsoft-Windows-Subsystem-Linux /all /norestart    
> dism.exe /online /enable-feature /featurename:VirtualMachinePlatform /all /norestart  
> wsl --set-default-version 2
3. Install Linux Distro
> https://www.microsoft.com/en-us/p/ubuntu-2004-lts/9n6svws3rx71?activetab=pivot:overviewtab  
4. Launch Ubuntu from the Windows Bar, finalize Ubuntu setup by setting a user name and password.

## Installing g++ on linux
1. Ensure Ubuntu is opened and you are are the command line.
2. Copy/Paste onto the command line:
> sudo apt-get install g++