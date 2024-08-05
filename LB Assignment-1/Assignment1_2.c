# Define the directory to search and the text to search for
$directory = "C:\Path\To\Directory"
$searchText = "your_search_text"

# Define the file extensions to search (optional)
$fileExtensions = "*.txt", "*.log"  # Add more extensions if needed

# Get all files in the directory and its subdirectories with specified extensions
$files = Get-ChildItem -Path $directory -Recurse -File -Include $fileExtensions

# Use Select-String to search for the text in the files
$matchingFiles = $files | ForEach-Object -Parallel {
    param($file, $searchText)
    
    if (Select-String -Path $file.FullName -Pattern $searchText -Quiet) {
        return $file.FullName
    }
} -ArgumentList $searchText -ThrottleLimit 4  # Adjust ThrottleLimit as needed

# Output the list of files that contain the search text
$matchingFiles | ForEach-Object { Write-Output $_ }
