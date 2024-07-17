using System;
using System.Configuration;
using System.Diagnostics;

class Program
{
    static void Main(string[] args)
    {
        if (IsTracingEnabled())
        {
            AddDailyLogListener();
        }

        // Example log messages
        Trace.WriteLine("This is a trace log message.");
        Trace.WriteLine("Logging another message with the date as the file name.");

        // Flush and close the Trace Listeners at the end of the application
        Trace.Flush();
        foreach (TraceListener listener in Trace.Listeners)
        {
            listener.Close();
        }
    }

    static bool IsTracingEnabled()
    {
        // Read the EnableTracing setting from the config file
        string tracingEnabled = ConfigurationManager.AppSettings["EnableTracing"];
        return bool.TryParse(tracingEnabled, out bool isEnabled) && isEnabled;
    }

    static void AddDailyLogListener()
    {
        // Get the current date
        string date = DateTime.Now.ToString("yyyy-MM-dd");

        // Create the log file name with the date
        string logFileName = $"log_{date}.txt";

        // Create the TextWriterTraceListener for the log file
        TextWriterTraceListener listener = new TextWriterTraceListener(logFileName);

        // Add the listener to the Trace Listeners
        Trace.Listeners.Add(listener);

        // Optionally, you can also add the listener to Debug Listeners if needed
        Debug.Listeners.Add(listener);
    }
}
