using System;
using Microsoft.Practices.EnterpriseLibrary.Logging;

class Program
{
    static void Main(string[] args)
    {
        // Load the logging configuration
        Logger.SetLogWriter(new LogWriterFactory().Create());

        // Log a message
        Logger.Write("This is an information message.", "General");

        // Log an error message with additional properties
        LogEntry logEntry = new LogEntry
        {
            Message = "This is an error message.",
            Severity = System.Diagnostics.TraceEventType.Error,
            Title = "Error",
            Categories = new List<string> { "General" }
        };

        Logger.Write(logEntry);

        Console.WriteLine("Logging complete.");
    }
}
