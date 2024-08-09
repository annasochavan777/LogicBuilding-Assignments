using System;
using System.Collections.Generic;
using System.Reflection;

public class ObjectToDictionaryConverter
{
    public static Dictionary<string, object> ConvertToDictionary(object obj)
    {
        if (obj == null)
            throw new ArgumentNullException(nameof(obj));

        var dictionary = new Dictionary<string, object>();

        // Get the type of the object
        Type type = obj.GetType();

        // Iterate over all properties of the object
        foreach (PropertyInfo property in type.GetProperties(BindingFlags.Public | BindingFlags.Instance))
        {
            // Get the property name
            string propertyName = property.Name;

            // Get the value of the property
            object propertyValue = property.GetValue(obj, null);

            // Add the property name and value to the dictionary
            dictionary.Add(propertyName, propertyValue);
        }

        return dictionary;
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

        var dictionary = ObjectToDictionaryConverter.ConvertToDictionary(exampleObject);

        // Print the dictionary
        foreach (var kvp in dictionary)
        {
            Console.WriteLine($"{kvp.Key}: {kvp.Value}");
        }
    }
}
