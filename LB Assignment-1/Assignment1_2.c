using System;
using System.Collections.Generic;
using System.Text;

public class DictionaryToStringConverter
{
    public static string ConvertDictionaryToString(Dictionary<string, object> dictionary, int indentLevel = 0)
    {
        if (dictionary == null)
            throw new ArgumentNullException(nameof(dictionary));

        var stringBuilder = new StringBuilder();
        string indent = new string(' ', indentLevel * 2);

        foreach (var kvp in dictionary)
        {
            stringBuilder.Append(indent + $"key: {kvp.Key}, value: ");
            if (kvp.Value is Dictionary<string, object> nestedDictionary)
            {
                stringBuilder.AppendLine();
                stringBuilder.Append(ConvertDictionaryToString(nestedDictionary, indentLevel + 1));
            }
            else
            {
                stringBuilder.AppendLine(kvp.Value?.ToString());
            }
        }

        return stringBuilder.ToString();
    }
}

public class Program
{
    public static void Main(string[] args)
    {
        var nestedDictionary = new Dictionary<string, object>
        {
            { "Name", "John Doe" },
            { "Age", 30 },
            { "IsEmployed", true },
            { "Address", new Dictionary<string, object>
                {
                    { "Street", "123 Main St" },
                    { "City", "Anytown" },
                    { "Zip", "12345" }
                }
            }
        };

        string result = DictionaryToStringConverter.ConvertDictionaryToString(nestedDictionary);

        Console.WriteLine(result);
    }
}
