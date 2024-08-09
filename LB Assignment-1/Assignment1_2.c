using System;
using System.Collections.Generic;
using System.Reflection;

public class ObjectToStringDictionaryConverter
{
    public static List<string> ConvertToStringDictionary(object obj)
    {
        if (obj == null)
            throw new ArgumentNullException(nameof(obj));

        var stringList = new List<string>();

        // Get the type of the object
        Type type = obj.GetType();

        // Iterate over all properties of the object
        foreach (PropertyInfo property in type.GetProperties(BindingFlags.Public | BindingFlags.Instance))
        {
            // Get the property name
            string propertyName = property.Name;

            // Get the value of the property
            object propertyValue = property.GetValue(obj, null);

            // Add the formatted string to the list
            stringList.Add($"key: {propertyName}, value: {propertyValue}");
        }

        return stringList;
    }
}

public class Example
{
    public string Name { get; set; }
    public int Age { get; set; }
    public bool IsEmployed { get; set; }
}

public class Program
{
    public static void Main(string[] args)
    {
        var exampleObject = new Example
        {
            Name = "John Doe",
            Age = 30,
            IsEmployed = true
        };

        var stringDictionary = ObjectToStringDictionaryConverter.ConvertToStringDictionary(exampleObject);

        // Print the string representations
        foreach (var entry in stringDictionary)
        {
            Console.WriteLine(entry);
        }
    }
}
