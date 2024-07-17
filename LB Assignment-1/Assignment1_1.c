<?xml version="1.0" encoding="utf-8" ?>
<configuration>
  <appSettings>
    <!-- Add a setting to enable or disable tracing -->
    <add key="EnableTracing" value="true"/>
  </appSettings>

  <system.diagnostics>
    <sources>
      <source name="DailyLogSource" switchName="DailyLogSwitch" switchType="System.Diagnostics.SourceSwitch">
        <listeners>
          <add name="DailyLogListener" type="System.Diagnostics.TextWriterTraceListener" initializeData="log.txt" />
        </listeners>
      </source>
    </sources>
    <switches>
      <add name="DailyLogSwitch" value="All" />
    </switches>
  </system.diagnostics>
</configuration>

using System;
using System.Configuration;
using System.Diagnostics;

class Program
{
    static void Main(string[] args)
    {
        if (IsTracingEnabled())
        {
            ConfigureDailyLogSource();
        }

        // Example log messages
        TraceSource traceSource = new TraceSource("DailyLogSource");
        traceSource.TraceEvent(TraceEventType.Information, 0, "This is a trace log message.");
        traceSource.TraceEvent(TraceEventType.Information, 1, "Logging another message with the date as the file name.");

        // Flush and close the Trace Listeners at the end of the application
        traceSource.Flush();
        foreach (TraceListener listener in traceSource.Listeners)
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

    static void ConfigureDailyLogSource()
    {
        // Get the TraceSource
        TraceSource traceSource = new TraceSource("DailyLogSource");

        // Get the current date
        string date = DateTime.Now.ToString("yyyy-MM-dd");

        // Update the log file name with the current date
        string logFileName = $"log_{date}.txt";
        TextWriterTraceListener listener = new TextWriterTraceListener(logFileName);

        // Clear existing listeners and add the new listener
        traceSource.Listeners.Clear();
        traceSource.Listeners.Add(listener);

        // Optionally, set the switch level
        traceSource.Switch.Level = SourceLevels.All;
    }
}
