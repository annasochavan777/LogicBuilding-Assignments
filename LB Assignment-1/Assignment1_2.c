using System;
using System.Collections.Generic;
using System.Text;

public class DictionaryToStringConverter
{
    public static string ConvertDictionaryToString(Dictionary<string, object> dictionary)
    {
        if (dictionary == null)
            throw new ArgumentNullException(nameof(dictionary));

        var stringBuilder = new StringBuilder();

        foreach (var kvp in dictionary)
        {
            stringBuilder.AppendLine($"key: {kvp.Key}, value: {kvp.Value}");
        }

        return stringBuilder.ToString();
    }
}

public class Program
{
    public static void Main(string[] args)
    {
        var dictionary = new Dictionary<string, object>
        {
            { "Name", "John Doe" },
            { "Age", 30 },
            { "IsEmployed", true }
        };

        string result = DictionaryToStringConverter.ConvertDictionaryToString(dictionary);

        Console.WriteLine(result);
    }
}
