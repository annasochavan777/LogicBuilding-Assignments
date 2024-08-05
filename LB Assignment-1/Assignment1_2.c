# Define the directory to search and the text to search for
$directory = "C:\Path\To\Directory"
$searchText = "your_search_text"

# Define the file extensions to search (optional)
$fileExtensions = "*.txt", "*.log"  # Add more extensions if needed

# Get all files in the directory and its subdirectories with specified extensions
$files = Get-ChildItem -Path $directory -Recurse -File -Include $fileExtensions

# Initialize an array to hold job objects
$jobs = @()

# Loop through each file and start a background job to search for the text
foreach ($file in $files) {
    $jobs += Start-Job -ScriptBlock {
        param($filePath, $pattern)

        # Use Select-String to search for the pattern in the file
        if (Select-String -Path $filePath -Pattern $pattern -Quiet) {
            return $filePath
        }
    } -ArgumentList $file.FullName, $searchText
}

# Wait for all jobs to complete
$jobs | ForEach-Object { $_ | Wait-Job }

# Collect and output the results from each completed job
$matchingFiles = $jobs | ForEach-Object {
    $result = $_ | Receive-Job
    $_ | Remove-Job
    if ($result) { $result }
}

# Output the list of files that contain the search text
$matchingFiles | ForEach-Object { Write-Output $_ }
