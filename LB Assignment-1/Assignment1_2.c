using Newtonsoft.Json;
using System;

public class MyData
{
    public string Name { get; set; }
    public byte[] Data { get; set; }
}

public class Program
{
    public static void Main()
    {
        var myData = new MyData
        {
            Name = "Example",
            Data = Encoding.UTF8.GetBytes("Hello, World!")
        };

        // Serialize the object to JSON
        string jsonString = JsonConvert.SerializeObject(myData);
        Console.WriteLine("Serialized JSON: " + jsonString);
        string jsonString = "{\"Name\":\"Example\",\"Data\":\"SGVsbG8sIFdvcmxkIQ==\"}";

        // Deserialize the JSON string back to an object
        try
        {
            var myData = JsonConvert.DeserializeObject<MyData>(jsonString);
            Console.WriteLine("Deserialized Name: " + myData.Name);
            Console.WriteLine("Deserialized Data: " + BitConverter.ToString(myData.Data));
        }
        catch (Exception ex)
        {
            Console.WriteLine("Deserialization error: " + ex.Message);
        }
    }
}
