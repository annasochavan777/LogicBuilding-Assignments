<?xml version="1.0" encoding="utf-8" ?>
<configuration>
  <configSections>
    <section name="loggingConfiguration" type="Microsoft.Practices.EnterpriseLibrary.Logging.Configuration.LoggingSettings, Microsoft.Practices.EnterpriseLibrary.Logging" />
  </configSections>

  <loggingConfiguration name="" tracingEnabled="true" defaultCategory="General">
    <listeners>
      <add fileName="log-{timestamp}.txt"
           formatter="TextFormatter"
           listenerDataType="Microsoft.Practices.EnterpriseLibrary.Logging.Configuration.FlatFileTraceListenerData, Microsoft.Practices.EnterpriseLibrary.Logging"
           traceOutputOptions="None"
           type="Microsoft.Practices.EnterpriseLibrary.Logging.TraceListeners.FlatFileTraceListener, Microsoft.Practices.EnterpriseLibrary.Logging" />
    </listeners>
    <formatters>
      <add template="Timestamp: {timestamp}{newline}Message: {message}{newline}Category: {category}{newline}Priority: {priority}{newline}EventId: {eventid}{newline}Severity: {severity}{newline}Title:{title}{newline}Machine: {machine}{newline}Application Domain: {appDomain}{newline}Process Id: {processId}{newline}Process Name: {processName}{newline}Thread Name: {threadName}{newline}Win32 Thread Id: {win32ThreadId}{newline}Extended Properties: {dictionary}{newline}"
           type="Microsoft.Practices.EnterpriseLibrary.Logging.Formatters.TextFormatter, Microsoft.Practices.EnterpriseLibrary.Logging"
           name="TextFormatter" />
    </formatters>
    <categorySources>
      <add switchValue="All" name="General">
        <listeners>
          <add name="FlatFileListener" />
        </listeners>
      </add>
    </categorySources>
    <specialSources>
      <allEvents switchValue="All" name="All Events">
        <listeners>
          <add name="FlatFileListener" />
        </listeners>
      </allEvents>
      <notProcessed switchValue="All" name="Unprocessed Category">
        <listeners>
          <add name="FlatFileListener" />
        </listeners>
      </notProcessed>
      <errors switchValue="All" name="Logging Errors & Warnings">
        <listeners>
          <add name="FlatFileListener" />
        </listeners>
      </errors>
    </specialSources>
  </loggingConfiguration>
</configuration>
