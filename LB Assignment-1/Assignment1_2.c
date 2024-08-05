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
