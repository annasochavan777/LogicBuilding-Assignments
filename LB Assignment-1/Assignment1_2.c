<configuration>
  <system.diagnostics>
    <sources>
      <source name="MyAppTraceSource" switchName="sourceSwitch" switchType="System.Diagnostics.SourceSwitch">
        <listeners>
          <add name="textListener" />
        </listeners>
      </source>
    </sources>
    <switches>
      <add name="sourceSwitch" value="Verbose" />
    </switches>
    <sharedListeners>
      <add name="textListener" 
           type="System.Diagnostics.TextWriterTraceListener" 
           initializeData="trace.log" />
    </sharedListeners>
    <trace autoflush="true" />
  </system.diagnostics>
</configuration>
