# Sample string containing a GUID
$string = "Here is a sample string with a GUID: 123e4567-e89b-12d3-a456-426614174000 and some other text."

# Regular expression pattern for GUID
$pattern = '[0-9a-fA-F]{8}-[0-9a-fA-F]{4}-[0-9a-fA-F]{4}-[0-9a-fA-F]{4}-[0-9a-fA-F]{12}'

# Extract the GUID from the string
$guid = [regex]::match($string, $pattern).Value

# Output the extracted GUID
Write-Output $guid
