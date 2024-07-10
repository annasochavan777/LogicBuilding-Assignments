<trace autoflush="true">
      <listeners>
        <add name="dailyLogFileListener" 
             type="System.Diagnostics.TextWriterTraceListener" 
             initializeData="log_$(Date).txt" />
        <remove name="Default" />
      </listeners>
    </trace>
