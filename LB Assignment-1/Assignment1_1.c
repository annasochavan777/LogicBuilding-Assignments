# Define the parameters
param (
    [string]$projectPath,
    [string]$packageName,
    [string]$newVersion
)

# Navigate to the project directory
Set-Location -Path $projectPath

# Update the NuGet package to the specified version
dotnet add package $packageName --version $newVersion

# Restore the project to ensure all packages are correctly installed
dotnet restore
.\UpdateNugetPackage.ps1 -projectPath "C:\path\to\your\project" -packageName "Package.Name" -newVersion "1.2.3"
